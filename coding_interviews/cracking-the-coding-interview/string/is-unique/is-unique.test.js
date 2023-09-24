import { describe, expect, it } from 'vitest';
import {
  isUnique,
  isUniqueWithSet,
  isUniqueWithSetSimplified,
} from './is-unique';

describe('isUnique', () => {
  it('returns true for unique characters', () => {
    expect(isUnique('asdfghjkl')).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUnique('asdfghjkla')).toBeFalsy();
  });
});

describe('isUniqueWithSet', () => {
  it('returns true for unique characters', () => {
    expect(isUniqueWithSet('asdfghjkl')).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUniqueWithSet('asdfghjkla')).toBeFalsy();
  });
});

describe('isUniqueWithSetSimplified', () => {
  it('returns true for unique characters', () => {
    expect(isUniqueWithSetSimplified('asdfghjkl')).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUniqueWithSetSimplified('asdfghjkla')).toBeFalsy();
  });
});
