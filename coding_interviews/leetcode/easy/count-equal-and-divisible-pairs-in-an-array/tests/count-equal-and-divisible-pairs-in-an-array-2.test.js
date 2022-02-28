import { describe, expect, it } from 'vitest';
import { countPairs } from '../count-equal-and-divisible-pairs-in-an-array-2';

describe('countPairs', () => {
  it('', () => {
    expect(countPairs([3, 1, 2, 2, 2, 1, 3], 2)).toEqual(4);
  });

  it('', () => {
    expect(countPairs([1, 2, 3, 4], 1)).toEqual(0);
  });
});
