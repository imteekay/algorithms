export class Set {
  constructor() {
    this.items = {};
  }

  add(item) {
    if (!this.has(item)) {
      this.items[item] = item;
    }
    return this;
  }

  delete(item) {
    if (this.has(item)) {
      delete this.items[item];
      return true;
    }

    return false;
  }

  has(item) {
    return this.items.hasOwnProperty(item);
  }

  clear() {
    this.items = {};
  }

  size() {
    return Object.keys(this.items).length;
  }

  values() {
    return Object.values(this.items);
  }

  union(otherSet) {
    const unionSet = new Set();

    this.values().forEach((value) => unionSet.add(value));
    otherSet.values().forEach((value) => unionSet.add(value));

    return unionSet;
  }

  intersection(otherSet) {
    const intersectionSet = new Set();

    for (let value of this.values()) {
      if (otherSet.has(value)) {
        intersectionSet.add(value);
      }
    }

    return intersectionSet;
  }
}
