import { describe, expect, it } from 'vitest';
import { targetIndices } from '../find-target-indices-after-sorting-array';

describe('targetIndices', () => {
  it('', () => {
    expect(
      targetIndices(
        [
          48, 90, 9, 21, 31, 35, 19, 69, 29, 52, 100, 54, 21, 86, 6, 45, 42, 5,
          62, 77, 15, 38,
        ],
        6
      )
    ).toEqual([1]);
  });

  it('', () => {
    expect(targetIndices([1, 2, 5, 2, 3], 2)).toEqual([1, 2]);
  });

  it('', () => {
    expect(targetIndices([1, 2, 5, 2, 3], 3)).toEqual([3]);
  });

  it('', () => {
    expect(targetIndices([1, 2, 5, 2, 3], 5)).toEqual([4]);
  });
});
