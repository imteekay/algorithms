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
    while (index > 0 && this.heap[index] < this.heap[parentIndex]) {
      this.swap(parentIndex, index);
      index = parentIndex;
      parentIndex = this.getParentIndex(index);
    }
  }

  siftDown(index) {
    let elementIndex = index;
    let leftIndex = this.getLeftIndex(index);
    let rightIndex = this.getRightIndex(index);
    let size = this.size();

    if (leftIndex < size && this.heap[leftIndex] < this.heap[elementIndex]) {
      elementIndex = leftIndex;
    }

    if (rightIndex < size && this.heap[rightIndex] < this.heap[elementIndex]) {
      elementIndex = rightIndex;
    }

    if (index !== elementIndex) {
      this.swap(index, elementIndex);
      this.siftDown(elementIndex);
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
}
