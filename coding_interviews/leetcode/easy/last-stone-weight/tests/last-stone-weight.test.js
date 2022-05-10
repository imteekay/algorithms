import { describe, expect, it } from 'vitest';
import { lastStoneWeight } from '../last-stone-weight';

describe('lastStoneWeight', () => {
  it('', () => {
    expect(lastStoneWeight([2, 7, 4, 1, 8, 1])).toEqual(1);
  });

  it('', () => {
    expect(lastStoneWeight([1])).toEqual(1);
  });

  it('', () => {
    expect(lastStoneWeight([2, 2])).toEqual(0);
  });

  it('', () => {
    expect(lastStoneWeight([10, 4, 2, 10])).toEqual(2);
  });
});
