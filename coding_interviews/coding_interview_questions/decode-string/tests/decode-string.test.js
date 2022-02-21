import { describe, it, expect } from 'vitest';
import { decodeString } from '../decode-string';

describe('decodeString', () => {
  it('', () => {
    expect(decodeString('3[a]2[bc]')).toEqual('aaabcbc');
  });

  it('', () => {
    expect(decodeString('2[abc]3[cd]ef')).toEqual('abcabccdcdcdef');
  });

  it('', () => {
    expect(decodeString('3[a2[c]]')).toEqual('accaccacc');
  });
});
