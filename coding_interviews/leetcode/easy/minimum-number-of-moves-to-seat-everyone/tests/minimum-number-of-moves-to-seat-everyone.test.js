import { describe, it, expect } from 'vitest';
import { minMovesToSeat } from '../minimum-number-of-moves-to-seat-everyone';

describe('minMovesToSeat', () => {
  it('', () => {
    expect(minMovesToSeat([3, 1, 5], [2, 7, 4])).toEqual(4);
  });

  it('', () => {
    expect(minMovesToSeat([4, 1, 5, 9], [1, 3, 2, 6])).toEqual(7);
  });

  it('', () => {
    expect(minMovesToSeat([2, 2, 6, 6], [1, 3, 2, 6])).toEqual(4);
  });
});
