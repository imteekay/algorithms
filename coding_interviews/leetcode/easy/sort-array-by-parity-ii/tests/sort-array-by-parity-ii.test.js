import { describe, it, expect } from 'vitest';
import { sortArrayByParityII } from '../sort-array-by-parity-ii';

describe('sortArrayByParityII', () => {
  it('', () => {
    expect(sortArrayByParityII([4, 2, 5, 7])).toEqual([4, 5, 2, 7]);
  });

  it('', () => {
    expect(sortArrayByParityII([2, 3])).toEqual([2, 3]);
  });
});
