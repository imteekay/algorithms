import { describe, expect, it } from 'vitest';
import { Queue } from '../queue';

describe('Queue', () => {
  it('', () => {
    const queue = new Queue();

    expect(queue.isEmpty()).toBeTruthy();
    expect(queue.size()).toEqual(0);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    expect(queue.isEmpty()).toBeFalsy();
    expect(queue.size()).toEqual(5);
    expect(queue.front()).toEqual(1);
    expect(queue.back()).toEqual(5);

    expect(queue.items).toEqual([1, 2, 3, 4, 5]);

    queue.dequeue();
    expect(queue.items).toEqual([2, 3, 4, 5]);

    queue.dequeue();
    expect(queue.items).toEqual([3, 4, 5]);

    queue.dequeue();
    expect(queue.items).toEqual([4, 5]);

    queue.dequeue();
    expect(queue.items).toEqual([5]);

    queue.dequeue();
    expect(queue.isEmpty()).toBeTruthy();
  });

  it('', () => {
    const queue = new Queue();

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    expect(queue.items).toEqual([1, 2, 3, 4, 5]);
    expect(queue.front()).toEqual(1);
    expect(queue.back()).toEqual(5);

    while (!queue.isEmpty()) {
      queue.dequeue();
    }

    expect(queue.isEmpty()).toBeTruthy();
  });
});
