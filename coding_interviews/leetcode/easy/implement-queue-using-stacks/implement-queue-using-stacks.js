const MyQueue = function () {
  this.list = [];
};

MyQueue.prototype.push = function (x) {
  this.list.push(x);
};

MyQueue.prototype.pop = function () {
  return this.list.shift();
};

MyQueue.prototype.peek = function () {
  return this.list[0];
};

MyQueue.prototype.empty = function () {
  return this.list.length === 0;
};
