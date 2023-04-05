function MyStack() {
  this.items = [];
}

MyStack.prototype.push = function (x) {
  this.items.push(x);
};

MyStack.prototype.pop = function () {
  return this.items.pop();
};

MyStack.prototype.top = function () {
  return this.items.at(-1);
};

MyStack.prototype.empty = function () {
  return this.items.length === 0;
};
