import { describe, expect, it } from 'vitest';
import {
  firstAndLastIndex,
  firstAndLastIndexBinarySearch,
} from '../first-and-last-index';

describe('firstAndLastIndex', () => {
  it('', () => {
    expect(firstAndLastIndex([1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9], 5)).toEqual([
      5, 7,
    ]);
  });

  it('', () => {
    expect(firstAndLastIndex([1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9], 4)).toEqual([
      4, 4,
    ]);
  });

  it('', () => {
    expect(firstAndLastIndex([1, 1, 2, 3, 4, 5, 5, 5, 6, 8, 9], 7)).toEqual([
      -1, -1,
    ]);
  });
});

describe('firstAndLastIndexBinarySearch', () => {
  it('', () => {
    expect(
      firstAndLastIndexBinarySearch([1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9], 5)
    ).toEqual([5, 7]);
  });

  it('', () => {
    expect(
      firstAndLastIndexBinarySearch([1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9], 4)
    ).toEqual([4, 4]);
  });

  it('', () => {
    expect(
      firstAndLastIndexBinarySearch([1, 1, 2, 3, 4, 5, 5, 5, 6, 8, 9], 7)
    ).toEqual([-1, -1]);
  });
});
