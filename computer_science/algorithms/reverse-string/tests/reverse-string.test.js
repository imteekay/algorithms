import { it, test, expect } from 'vitest';

test('reverseString', () => {
  it('returns the reversed string', () => {
    expect(reverseString('asdfghjkl')).toEqual('lkjhgfdsa');
  });

  it('returns the reversed string', () => {
    expect(reverseString('lkjhgfdsa')).toEqual('asdfghjkl');
  });

  it('returns the reversed string', () => {
    expect(reverseString('')).toEqual('');
  });
});
