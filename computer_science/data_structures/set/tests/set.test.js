import { describe, it, expect } from 'vitest';
import { Set } from '../set';

describe('Set', () => {
  it('performs all behaviors correctly', () => {
    const set = new Set();
    set.add(1);
    expect(set.values()).toEqual([1]);
    expect(set.has(1)).toEqual(true);
    expect(set.size()).toEqual(1);
    set.add(2);
    expect(set.values()).toEqual([1, 2]);
    expect(set.has(2)).toEqual(true);
    expect(set.size()).toEqual(2);
    set.delete(1);
    expect(set.values()).toEqual([2]);
    set.delete(2);
    expect(set.values()).toEqual([]);
  });
});
