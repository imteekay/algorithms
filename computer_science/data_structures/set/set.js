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
}
