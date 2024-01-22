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
