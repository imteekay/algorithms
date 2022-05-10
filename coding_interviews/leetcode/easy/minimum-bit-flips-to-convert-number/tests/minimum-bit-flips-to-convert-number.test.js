import { describe, expect, it } from 'vitest';
import { minBitFlips } from '../minimum-bit-flips-to-convert-number';

describe('minBitFlips', () => {
  it('', () => {
    expect(minBitFlips(10, 7)).toEqual(3);
  });

  it('', () => {
    expect(minBitFlips(1, 16)).toEqual(2);
  });

  it('', () => {
    expect(minBitFlips(3, 4)).toEqual(3);
  });
});
