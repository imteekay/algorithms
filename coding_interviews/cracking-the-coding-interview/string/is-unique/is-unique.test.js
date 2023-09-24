import { describe, expect, it } from 'vitest';
import {
  isUnique,
  isUniqueWithSet,
  isUniqueWithSetSimplified,
  isUniqueWithoutDS,
} from './is-unique';

const unique = 'asdfghjkl';
const nonUnique = 'asdfghjkla';

describe('isUnique', () => {
  it('returns correct result', () => {
    expect(isUnique(unique)).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUnique(nonUnique)).toBeFalsy();
  });
});

describe('isUniqueWithSet', () => {
  it('returns true for unique characters', () => {
    expect(isUniqueWithSet(unique)).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUniqueWithSet(nonUnique)).toBeFalsy();
  });
});

describe('isUniqueWithSetSimplified', () => {
  it('returns true for unique characters', () => {
    expect(isUniqueWithSetSimplified(unique)).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUniqueWithSetSimplified(nonUnique)).toBeFalsy();
  });
});

describe('isUniqueWithoutDS', () => {
  it('returns true for unique characters', () => {
    expect(isUniqueWithoutDS(unique)).toBeTruthy();
  });

  it('returns false for non-unique characters', () => {
    expect(isUniqueWithoutDS(nonUnique)).toBeFalsy();
  });
});
