import { describe, expect, it } from 'vitest';
import { binarySearch } from '../binary-search';

describe('binarySearch', () => {
  const list = [1, 3, 4, 69, 71, 81, 90, 99, 420, 1337, 69420];
  const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

  it('passes the search', () => {
    expect(binarySearch(list, 69)).toBeTruthy();
    expect(binarySearch(list, 1336)).toBeFalsy();
    expect(binarySearch(list, 69420)).toBeTruthy();
    expect(binarySearch(list, 69421)).toBeFalsy();
    expect(binarySearch(list, 1)).toBeTruthy();
    expect(binarySearch(list, 0)).toBeFalsy();
  });

  it('passes the search', () => {
    expect(binarySearch(numbers, 5)).toBeTruthy();
    expect(binarySearch(numbers, 11)).toBeFalsy();
    expect(binarySearch(numbers, -1)).toBeFalsy();
    expect(binarySearch(numbers, 0)).toBeFalsy();
    expect(binarySearch(numbers, 9)).toBeTruthy();
    expect(binarySearch(numbers, 1)).toBeTruthy();
  });
});
