import { describe, it, expect } from 'vitest';
import {
  sortArrayByParityII,
  sortArrayByParityIIInPlace,
} from '../sort-array-by-parity-ii';

describe('sortArrayByParityII', () => {
  it('', () => {
    expect(sortArrayByParityII([4, 2, 5, 7])).toEqual([4, 5, 2, 7]);
  });

  it('', () => {
    expect(sortArrayByParityII([2, 3])).toEqual([2, 3]);
  });

  it('', () => {
    expect(sortArrayByParityII([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])).toEqual([
      2, 1, 4, 3, 6, 5, 8, 7, 10, 9,
    ]);
  });

  it('', () => {
    expect(sortArrayByParityII([2, 3, 1, 1, 4, 0, 0, 4, 3, 3])).toEqual([
      2, 3, 4, 1, 0, 1, 0, 3, 4, 3,
    ]);
  });
});

describe('sortArrayByParityIIInPlace', () => {
  it('', () => {
    expect(sortArrayByParityIIInPlace([4, 2, 5, 7])).toEqual([4, 5, 2, 7]);
  });

  it('', () => {
    expect(sortArrayByParityIIInPlace([2, 3])).toEqual([2, 3]);
  });

  it('', () => {
    expect(sortArrayByParityIIInPlace([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])).toEqual(
      [2, 1, 4, 3, 6, 5, 8, 7, 10, 9]
    );
  });

  it('', () => {
    expect(sortArrayByParityIIInPlace([2, 3, 1, 1, 4, 0, 0, 4, 3, 3])).toEqual([
      2, 3, 4, 1, 0, 1, 0, 3, 4, 3,
    ]);
  });
});
