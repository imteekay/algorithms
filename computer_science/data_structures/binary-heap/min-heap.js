class MinHeap {
  constructor(compareFn = defaultCompare) {
    this.compareFn = compareFn;
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
      this.compareFn(this.heap[parentIndex], this.heap[index]) ===
        Compare.BIGGER_THAN
    ) {
      this.swap(this.heap, parentIndex, index);
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
      this.compareFn(this.heap[element], this.heap[leftIndex]) ===
        Compare.BIGGER_THAN
    ) {
      element = leftIndex;
    }

    if (
      rightIndex < size &&
      this.compareFn(this.heap[element], this.heap[rightIndex]) ===
        Compare.BIGGER_THAN
    ) {
      element = rightIndex;
    }

    if (index !== element) {
      this.swap(this.heap, index, element);
      this.siftDown(element);
    }
  }

  swap(array, a, b) {
    const temp = array[a];
    array[a] = array[b];
    array[b] = temp;
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

const Compare = {
  LESS_THAN: -1,
  BIGGER_THAN: 1,
  EQUALS: 0,
};

function defaultCompare(a, b) {
  if (a === b) {
    return Compare.EQUALS;
  }
  return a < b ? Compare.LESS_THAN : Compare.BIGGER_THAN;
}

const heap = new MinHeap();
heap.insert(2);
heap.insert(3);
heap.insert(4);
heap.insert(5);
heap.insert(1);
console.log('Heap size: ', heap.size());
console.log('Heap is empty: ', heap.isEmpty());
console.log('Heap min value: ', heap.findMinimum());

const heap2 = new MinHeap();
for (let i = 1; i < 10; i++) {
  heap2.insert(i);
}

console.log('Extract minimum: ', heap2.extract()); // 1
console.log('Extract minimum: ', heap2.extract()); // 2
console.log('Extract minimum: ', heap2.extract()); // 3
console.log('Extract minimum: ', heap2.heap);

const heap3 = new MinHeap();
heap3.insert(1);
for (let i = 10; i > 1; i--) {
  heap3.insert(i);
}
console.log('Extract minimum: ', heap3.extract()); // 1
console.log('Extract minimum: ', heap3.extract()); // 2
console.log('Extract minimum: ', heap3.extract()); // 3
console.log('Extract minimum: ', heap3.heap);
