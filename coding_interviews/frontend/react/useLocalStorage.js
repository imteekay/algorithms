/**
 * Write a useLocalStorage custom hook that takes in a required key as a string, and an optional initialValue.

 * Calling useLocalStorage in a component should save the initialValue in localStorage at the given key when the component first mounts. If a value already exists at that key, the initialValue parameter should be ignored.
 * The useLocalStorage function should return an array with the current value as the first element and a setter function as the second element. The setter function should take in a new value as a parameter and update localStorage at the original key.
 * When the setter function is called, the component should re-render, just as it would when a standard piece of state is updated.
 * Any value added to localStorage should first be passed to JSON.stringify. When reading the value from localStorage, JSON.parse should be used to parse the original value.
 * For simplicity, you can asssume the key parameter will not change between renders.

 * Sample Usage
 
 ```js
  function SaveValues() {
    const [value, setValue] = useLocalStorage('name', '');
    return <input value={value} onChange={(e) => setValue(e.target.value)} />;
  }
 ```
 */

function useLocalStorage(key, initialValue) {
  const [value, setValue] = useState();
  const localStorageValue = JSON.parse(localStorage.getItem(key));

  useEffect(() => {
    if ([null, undefined].includes(localStorageValue)) {
      localStorage.setItem(key, JSON.stringify(initialValue));
      setValue(initialValue);
    } else {
      setValue(localStorageValue);
    }
  }, []);

  const handleSetValue = (newValue) => {
    setValue(newValue);
    localStorage.setItem(key, JSON.stringify(newValue));
  };

  return [value, handleSetValue];
}
