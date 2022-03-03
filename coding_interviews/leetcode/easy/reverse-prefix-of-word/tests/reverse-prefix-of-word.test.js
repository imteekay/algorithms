import { describe, it, expect } from 'vitest';
import { reversePrefix } from '../reverse-prefix-of-word';

describe('reversePrefix', () => {
  it('reverses the prefix', () => {
    expect(reversePrefix('abcdefd', 'd')).toEqual('dcbaefd');
  });

  it('reverses the prefix', () => {
    expect(reversePrefix('xyxzxe', 'z')).toEqual('zxyxxe');
  });

  it('reverses the prefix', () => {
    expect(reversePrefix('abcd', 'z')).toEqual('abcd');
  });
});
