const MyHashSet = function () {
  this.hashmap = new Map();
};

MyHashSet.prototype.add = function (key) {
  this.hashmap.set(key, true);
};

MyHashSet.prototype.remove = function (key) {
  this.hashmap.delete(key);
};

MyHashSet.prototype.contains = function (key) {
  return this.hashmap.has(key);
};
