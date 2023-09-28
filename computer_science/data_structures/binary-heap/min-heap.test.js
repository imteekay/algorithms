import { describe, expect, it } from 'vitest';
import { MinHeap } from './min-heap';

describe('MinHeap', () => {
  it('findMinimum', () => {
    const heap = new MinHeap();
    heap.insert(2);
    heap.insert(3);
    heap.insert(4);
    heap.insert(5);
    heap.insert(1);

    expect(heap.findMinimum()).toEqual(1);
  });

  it('size', () => {
    const heap = new MinHeap();
    for (let i = 1; i < 10; i++) {
      heap.insert(i);
    }

    expect(heap.size()).toEqual(9);
  });

  it('integrate all methods', () => {
    const heap = new MinHeap();

    expect(heap.isEmpty()).toEqual(true);

    heap.insert(2);
    heap.insert(3);
    heap.insert(4);
    heap.insert(5);
    heap.insert(1);

    expect(heap.isEmpty()).toEqual(false);
    expect(heap.size()).toEqual(5);
    expect(heap.findMinimum()).toEqual(1);
    expect(heap.extract()).toEqual(1);
    expect(heap.size()).toEqual(4);

    heap.insert(1);

    expect(heap.size()).toEqual(5);
    expect(heap.findMinimum()).toEqual(1);
    expect(heap.extract()).toEqual(1);
    expect(heap.extract()).toEqual(2);
    expect(heap.extract()).toEqual(3);
    expect(heap.extract()).toEqual(4);
    expect(heap.extract()).toEqual(5);
    expect(heap.size()).toEqual(0);
    expect(heap.isEmpty()).toEqual(true);
  });
});
