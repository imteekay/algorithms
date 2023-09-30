import { describe, expect, it } from 'vitest';
import { removeChars } from './remove-characters';

describe('removeChars', () => {
  it('', () => {
    expect(removeChars('')).toEqual('');
    expect(removeChars('a')).toEqual('a');
    expect(removeChars('bbb')).toEqual('');
    expect(removeChars('ccc')).toEqual('ccc');
    expect(removeChars('ab')).toEqual('a');
    expect(removeChars('abc')).toEqual('');
    expect(removeChars('cabbaabcca')).toEqual('caa');
    expect(removeChars('aaaaba')).toEqual('aaaaa');
    expect(removeChars('abbbaaccbbaccab')).toEqual('a');
    expect(removeChars('cabaaaacccaacccbabaccaa')).toEqual('caaa');
  });
});
