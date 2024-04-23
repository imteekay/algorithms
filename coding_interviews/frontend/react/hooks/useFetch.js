/**
  Write a useFetch custom hook that takes in a required url as a string or URL object. This parameter should be directly passed to the native JavaScript fetch function.

  Calling useFetch in a component should make a fetch request when an instance of the component is mounted. Additionally, a new request should be issued on any render where the url has changed.

  The useFetch function should return an object with three keys:

  responseJSON: The JSON response from the most recent call to fetch. If no response has been received yet or the most recent request resulted in an error, this should be null.
  isLoading: When a fetch request is issued, this should be set to true, and set to false when the response comes back or an error is thrown.
  error: If the most recent call to fetch threw an error or retrieving the JSON from the most recent response threw an error, the error should be saved in this value, otherwise it should be null.
  In the event that the url changes before the previous fetch request returns, the response from that previous request should not be used in order to prevent a race condition.

  ```js
  function Fetcher() {
    const { responseJSON, isLoading, error } = useFetch(url);
    const [url, setUrl] = useState('');
    return (
      <>
        <input value={url} onChange={(e) => setUrl(e.target.value)} />
        {
          error ? <p>Error: {error}</p> :
          isLoading ? <p>Loading...</p> :
          <p>Response: {responseJSON}</p>
        }
      </>
    );
  }
  ```
 */

function useFetch(url) {
  const [responseJSON, setResponseJSON] = useState(null);
  const [isLoading, setIsLoading] = useState(false);
  const [error, setError] = useState(null);

  useEffect(() => {
    const controller = new AbortController();
    const { signal } = controller;

    const request = async () => {
      try {
        setIsLoading(true);
        const response = await fetch(url, { signal });
        setResponseJSON(await response.json());
        setError(null);
      } catch (err) {
        setError(err);
        setResponseJSON(null);
      } finally {
        setIsLoading(false);
      }
    };

    request();

    return () => {
      controller.abort();
    };
  }, [url]);

  return {
    responseJSON,
    error,
    isLoading,
  };
}
