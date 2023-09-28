export class MinHeap {
  constructor() {
    this.heap = [];
  }

  insert(value) {
    if (value != null) {
      this.heap.push(value);
      this.siftUp(this.heap.length - 1);
      return true;
    }
    return false;
  }

  extract() {
    if (this.isEmpty()) {
      return undefined;
    }

    if (this.size() === 1) {
      return this.heap.shift();
    }

    const removedValue = this.heap.shift();
    this.siftDown(0);
    return removedValue;
  }

  size() {
    return this.heap.length;
  }

  isEmpty() {
    return this.size() === 0;
  }

  findMinimum() {
    return this.isEmpty() ? undefined : this.heap[0];
  }

  siftUp(index) {
    let parentIndex = this.getParentIndex(index);
    while (
      index > 0 &&
      this.compare(this.heap[parentIndex], this.heap[index]) ===
        this.Compare.BIGGER_THAN
    ) {
      this.swap(parentIndex, index);
      index = parentIndex;
      parentIndex = this.getParentIndex(index);
    }
  }

  siftDown(index) {
    let element = index;
    const leftIndex = this.getLeftIndex(index);
    const rightIndex = this.getRightIndex(index);
    const size = this.size();

    if (
      leftIndex < size &&
      this.compare(this.heap[element], this.heap[leftIndex]) ===
        this.Compare.BIGGER_THAN
    ) {
      element = leftIndex;
    }

    if (
      rightIndex < size &&
      this.compare(this.heap[element], this.heap[rightIndex]) ===
        this.Compare.BIGGER_THAN
    ) {
      element = rightIndex;
    }

    if (index !== element) {
      this.swap(index, element);
      this.siftDown(element);
    }
  }

  swap(a, b) {
    const temp = this.heap[a];
    this.heap[a] = this.heap[b];
    this.heap[b] = temp;
  }

  getLeftIndex(index) {
    return 2 * index + 1;
  }

  getRightIndex(index) {
    return 2 * index + 2;
  }

  getParentIndex(index) {
    return index === 0 ? undefined : Math.floor((index - 1) / 2);
  }

  compare(a, b) {
    if (a === b) {
      return this.Compare.EQUALS;
    }
    return a < b ? this.Compare.LESS_THAN : this.Compare.BIGGER_THAN;
  }

  Compare = {
    LESS_THAN: -1,
    BIGGER_THAN: 1,
    EQUALS: 0,
  };
}
