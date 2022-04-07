import { describe, expect, it } from 'vitest';
import { divideArray } from '../divide-array-into-equal-pairs';

describe('divideArray', () => {
  it('', () => {
    expect(divideArray([3, 2, 3, 2, 2, 2])).toEqual(true);
  });

  it('', () => {
    expect(divideArray([1, 2, 3, 4])).toEqual(false);
  });

  it('', () => {
    expect(divideArray([2, 2])).toEqual(true);
  });
});
