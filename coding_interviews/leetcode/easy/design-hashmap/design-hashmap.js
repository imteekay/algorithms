const MyHashMap = function () {
  this.map = [];
};

MyHashMap.prototype.put = function (key, value) {
  let found = false;

  this.map.forEach(([k], index) => {
    if (key === k) {
      this.map[index] = [key, value];
      found = true;
    }
  });

  if (!found) this.map.push([key, value]);
};

MyHashMap.prototype.get = function (key) {
  let value = -1;

  this.map.forEach(([k, v]) => {
    if (key === k) {
      value = v;
    }
  });

  return value;
};

MyHashMap.prototype.remove = function (key) {
  this.map.forEach(([k], index) => {
    if (key === k) {
      this.map = [...this.map.slice(0, index), ...this.map.slice(index + 1)];
    }
  });
};
