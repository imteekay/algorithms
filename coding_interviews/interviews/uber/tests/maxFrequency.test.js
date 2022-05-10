import { describe, expect, it } from 'vitest';
import { maxFrequency } from '../maxFrequency';

describe('maxFrequency', () => {
  it('', () => {
    expect(maxFrequency([2, 2, 2, 3, 3, 1])).toEqual(2);
  });

  it('', () => {
    expect(maxFrequency([1, 1, 2, 2, 3, 3])).toEqual(1);
  });

  it('', () => {
    expect(maxFrequency([])).toEqual(-1);
  });
});
