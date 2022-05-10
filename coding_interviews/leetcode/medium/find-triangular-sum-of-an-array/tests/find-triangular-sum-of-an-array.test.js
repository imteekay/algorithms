import { describe, expect, it } from 'vitest';
import { triangularSum } from '../find-triangular-sum-of-an-array';

describe('triangularSum', () => {
  it('', () => {
    expect(triangularSum([1, 2, 3, 4, 5])).toEqual([8]);
  });

  it('', () => {
    expect(triangularSum([5])).toEqual([5]);
  });
});
