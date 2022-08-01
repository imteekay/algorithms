import { describe, expect, it } from 'vitest';
import { nextGreaterElement } from '../next-greater-element-i';

describe('nextGreaterElement', () => {
  it('', () => {
    expect(nextGreaterElement([4, 1, 2], [1, 3, 4, 2])).toEqual([-1, 3, -1]);
  });

  it('', () => {
    expect(nextGreaterElement([2, 4], [1, 2, 3, 4])).toEqual([3, -1]);
  });

  it('', () => {
    expect(nextGreaterElement([4, 1, 2], [1, 3, 4, 2, 5])).toEqual([5, 3, 5]);
  });

  it('', () => {
    expect(nextGreaterElement([4, 1, 2], [3, 4, 5, 2, 1])).toEqual([5, -1, -1]);
  });

  it('', () => {
    expect(nextGreaterElement([4, 1, 2], [3, 4, 5, 2, 1, 6])).toEqual([
      5, 6, 6,
    ]);
  });
});
