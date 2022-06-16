import { describe, expect, it } from 'vitest';
import { kthLargest } from '../kth-largest';

describe('kthLargest', () => {
  it('', () => {
    expect(kthLargest([4, 2, 9, 7, 5, 6, 7, 1, 3], 4)).toEqual(6);
  });
});
