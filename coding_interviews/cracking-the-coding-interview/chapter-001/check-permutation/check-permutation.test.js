import { describe, expect, it } from 'vitest';
import { checkPermutation } from './check-permutation';

describe('checkPermutation', () => {
  it('returns the correct results', () => {
    expect(checkPermutation('aba', 'aab')).toBeTruthy();
  });

  it('returns the correct results', () => {
    expect(checkPermutation('aba', 'aaba')).toBeFalsy();
  });

  it('returns the correct results', () => {
    expect(checkPermutation('aba', 'aa')).toBeFalsy();
  });
});
