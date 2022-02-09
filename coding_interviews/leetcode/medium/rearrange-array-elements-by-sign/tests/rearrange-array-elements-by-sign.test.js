import { describe, expect, it } from 'vitest';
import { rearrangeArray } from '../rearrange-array-elements-by-sign';

describe('rearrangeArray', () => {
  it('', () => {
    expect(rearrangeArray([3, 1, -2, -5, 2, -4])).toEqual([
      3, -2, 1, -5, 2, -4,
    ]);
  });

  it('', () => {
    expect(rearrangeArray([-1, 1])).toEqual([1, -1]);
  });
});
