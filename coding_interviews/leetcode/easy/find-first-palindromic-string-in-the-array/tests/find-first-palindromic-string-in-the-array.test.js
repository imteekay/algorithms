import { describe, expect, it } from 'vitest';
import {
  firstPalindrome,
  isPalindrome,
} from '../find-first-palindromic-string-in-the-array';

describe('firstPalindrome', () => {
  it('', () => {
    expect(firstPalindrome(['abc', 'car', 'ada', 'racecar', 'cool'])).toEqual(
      'ada'
    );
  });

  it('', () => {
    expect(firstPalindrome(['notapalindrome', 'racecar'])).toEqual('racecar');
  });

  it('', () => {
    expect(firstPalindrome(['def', 'ghi'])).toEqual('');
  });
});

describe('isPalindrome', () => {
  it('', () => {
    expect(isPalindrome('ada')).toBeTruthy();
  });

  it('', () => {
    expect(isPalindrome('')).toBeTruthy();
  });

  it('', () => {
    expect(isPalindrome('eda')).toBeFalsy();
  });
});
