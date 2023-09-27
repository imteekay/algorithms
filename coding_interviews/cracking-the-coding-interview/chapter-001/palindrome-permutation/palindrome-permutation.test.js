import { describe, expect, it } from 'vitest';
import { palindromePermutation } from './palindrome-permutation';

describe('palindromePermutation', () => {
  it('', () => {
    expect(palindromePermutation('Tact Coa')).toEqual(true);
  });

  it('', () => {
    expect(palindromePermutation('tat')).toEqual(true);
  });

  it('', () => {
    expect(palindromePermutation('abcd')).toEqual(false);
  });

  it('', () => {
    expect(palindromePermutation('tactfcoa')).toEqual(false);
  });

  it('', () => {
    expect(palindromePermutation('tactfffcoa')).toEqual(false);
  });
});
