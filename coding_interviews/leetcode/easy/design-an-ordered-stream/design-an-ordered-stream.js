const OrderedStream = function (n) {
  this.n = n;
  this.key = 1;
  this.hashmap = new Map();
};

OrderedStream.prototype.insert = function (idKey, value) {
  this.hashmap.set(idKey, value);

  if (this.key === idKey) {
    const chunk = [];

    for (let index = this.key; index <= this.n + 1; index++) {
      if (this.hashmap.has(index)) {
        const value = this.hashmap.get(index);
        chunk.push(value);
        this.hashmap.delete(index);
        this.key++;
      } else {
        return chunk;
      }
    }
  }

  return [];
};
