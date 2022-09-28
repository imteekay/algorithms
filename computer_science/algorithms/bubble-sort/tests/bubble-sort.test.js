import { describe, expect, it } from 'vitest';
import { bubbleSort } from '../bubble-sort';

describe('bubbleSort', () => {
  it('sorts', () => {
    expect(bubbleSort([8, 5, 2, 5, 7, 5])).toEqual([2, 5, 5, 5, 7, 8]);
    expect(
      bubbleSort([8, 33, 5, 2, 7, 8, 6, 3, 4, 99, 2, 5, 2, 5, 7, 5])
    ).toEqual([2, 2, 2, 3, 4, 5, 5, 5, 5, 6, 7, 7, 8, 8, 33, 99]);
  });
});
