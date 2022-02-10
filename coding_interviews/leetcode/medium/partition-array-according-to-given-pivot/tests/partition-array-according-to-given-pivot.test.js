import { describe, expect, it } from 'vitest';
import { pivotArray } from '../partition-array-according-to-given-pivot';

describe('pivotArray', () => {
  it('', () => {
    expect(pivotArray([9, 12, 5, 10, 14, 3, 10], 10)).toEqual([
      9, 5, 3, 10, 10, 12, 14,
    ]);
  });

  it('', () => {
    expect(pivotArray([-3, 4, 3, 2], 2)).toEqual([-3, 2, 4, 3]);
  });
});
