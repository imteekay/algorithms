export const CustomStack = function (maxSize) {
  this.maxSize = maxSize;
  this.items = [];
};

CustomStack.prototype.push = function (x) {
  if (this.items.length < this.maxSize) {
    this.items.push(x);
  }
};

CustomStack.prototype.pop = function () {
  return this.items.length > 0 ? this.items.pop() : -1;
};

CustomStack.prototype.increment = function (k, val) {
  for (let i = 0; i < k; i++) {
    if (i <= this.items.length - 1) this.items[i] += val;
  }
};
