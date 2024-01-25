/*
Without calling Array.prototype.map(), Array.prototype.filter(), Array.prototype.reduce(), or Array.prototype.forEach(),
implement the following three similar functions on the Array prototype:

myMap(callback)

- Without mutating the original array, this function should call the passed callback function on every element of
the array and return a new array containing the results of all these calls, in the corresponding order.
- The callback function can take in up to three parameters:
  - The current value in the array.
  - The current index in the array.
  - The array itself.
  
myFilter(callback)
- Without mutating the original array, this function should call the passed callback function on every element
of the array and return a new array containing the values of the original array that, when passed to the
callback function, returned true. These values should maintain their original order.
- The callback function takes in the same arguments as the ones that the callback function in myMap takes in.

myReduce(callback, initialValue)
- Without mutating the original array, this function should call the passed callback function on every element
of the array and return the result of the last call to the callback.
- The callback function can take in up to four parameters:
  - The accumulator, which is the return value of the previous call to the callback. On the first call to the callback, the accumulator should be set to the initialValue. If the initialValue is undefined, then it should be set to the first value of the array, and the callback should skip the first element in the array and be called directly on the second element.
  - The current value in the array.
  - The current index in the array.
  - The array itself.

  If the array contains no elements, the initialValue should be returned. Note that this differs slightly from the Array.prototype.reduce function.
*/

Array.prototype.myMap = function (callback) {
  let arr = [];

  for (let index = 0; index < this.length; index++) {
    arr.push(callback(this[index], index, this));
  }

  return arr;
};

Array.prototype.myFilter = function (callback) {
  let arr = [];

  for (let index = 0; index < this.length; index++) {
    if (callback(this[index], index, this) === true) {
      arr.push(this[index]);
    }
  }

  return arr;
};

Array.prototype.myReduce = function (callback, initialValue) {
  let acc = initialValue;

  for (let index = 0; index < this.length; index++) {
    if (index === 0 && initialValue === undefined) {
      acc = this[index];
    } else {
      acc = callback(acc, this[index], index, this);
    }
  }

  return acc;
};
