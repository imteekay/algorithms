import { describe, expect, it } from 'vitest';
import { pairSum } from '../pair-sum';

describe('pairSum', () => {
  it('', () => {
    expect(pairSum([5, 4, 2, 1])).toEqual(6);
  });

  it('', () => {
    expect(pairSum([4, 2, 2, 3])).toEqual(7);
  });

  it('', () => {
    expect(pairSum([1, 100000])).toEqual(100001);
  });
});
