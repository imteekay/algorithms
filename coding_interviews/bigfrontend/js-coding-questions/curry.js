// https://bigfrontend.dev/problem/implement-curry

function curry(fn) {
  const curried = (...args) => {
    if (args.length >= fn.length) {
      return fn(...args);
    } else {
      return (...restArgs) => curried(...[...args, ...restArgs]);
    }
  };

  return curried;
}
