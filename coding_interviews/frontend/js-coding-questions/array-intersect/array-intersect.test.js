import { describe, expect, it } from 'vitest';
import { getIntersection } from './array-intersect';

describe('getIntersection', () => {
  it('', () => {
    expect(getIntersection([1, 2, 3], [3, 2, 1])).toEqual([3, 2, 1]);
    expect(getIntersection([], [3, 2, 1])).toEqual([]);
    expect(
      getIntersection(
        [1, 100, 200, 8, 8, 8, 3, 6, 100, 10, 10],
        [8, 7, 7, 50, 50, 1, 1, 1, 1, 3, 3]
      )
    ).toEqual([8, 1, 3]);
    expect(
      getIntersection(
        [
          1,
          2,
          1,
          2,
          1,
          2,
          1,
          2,
          1,
          2,
          1,
          2,
          1,
          2,
          1,
          2,
          3,
          3,
          3,
          3,
          3,
          3,
          ,
          2,
          2,
          2,
        ],
        [2]
      )
    ).toEqual([2]);
  });
});
