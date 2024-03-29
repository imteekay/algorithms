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

  it('union sets', () => {
    const setA = new Set();
    setA.add(1);
    setA.add(2);
    setA.add(3);

    const setB = new Set();
    setB.add(3);
    setB.add(4);
    setB.add(5);
    setB.add(6);

    const unionAB = setA.union(setB);
    expect(unionAB.values()).toEqual([1, 2, 3, 4, 5, 6]);
  });

  it('intersection sets', () => {
    const setA = new Set();
    setA.add(1);
    setA.add(2);
    setA.add(3);

    const setB = new Set();
    setB.add(2);
    setB.add(3);
    setB.add(4);

    const intersectionAB = setA.intersection(setB);
    expect(intersectionAB.values()).toEqual([2, 3]);
  });

  it('difference sets', () => {
    const setA = new Set();
    setA.add(1);
    setA.add(2);
    setA.add(3);

    const setB = new Set();
    setB.add(2);
    setB.add(3);
    setB.add(4);

    const differenceAB = setA.difference(setB);
    expect(differenceAB.values()).toEqual([1]);
  });

  it('is subset of', () => {
    const setA = new Set();
    setA.add(1);
    setA.add(2);

    const setB = new Set();
    setB.add(1);
    setB.add(2);
    setB.add(3);

    const setC = new Set();
    setC.add(2);
    setC.add(3);
    setC.add(4);

    expect(setA.isSubsetOf(setB)).toEqual(true);
    expect(setA.isSubsetOf(setC)).toEqual(false);
  });
});
