/* Implement a retryAsync function that will call an asynchronous function and then
 * recall it again on failure until a max number of retries has been reached.
 * The function receives the asynchronous function and the maximum number of retries
 * The function should return the result of the async function and throw an error
 * after the maximum number of retries
 */

// Update the following function
const retryAsync = async (asyncFunc, maxRetries) => {
  try {
    return await asyncFunc();
  } catch (error) {
    if (maxRetries > 0) {
      return await retryAsync(asyncFunc, maxRetries - 1);
    } else {
      throw new Error('error');
    }
  }
};

// Usage Example - DO NOT MODIFY
const main = async () => {
  const myPromise = () =>
    new Promise((resolve, reject) => {
      setTimeout(() => {
        reject('Promise Failed');
      }, 3000);
    });

  const res = await retryAsync(myPromise, 3);
  return res;
};
main();
