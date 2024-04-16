import { describe, expect, it } from 'vitest';
import { deepEquals } from './deep-equals';

describe('deepEquals', () => {
  describe('primitives', () => {
    it('', () => {
      expect(deepEquals(1, 1)).toEqual(true);
      expect(deepEquals(1, 2)).toEqual(false);
      expect(deepEquals('abc', 'abc')).toEqual(true);
      expect(deepEquals('bc', 'abc')).toEqual(false);
      expect(deepEquals(true, true)).toEqual(true);
      expect(deepEquals(true, false)).toEqual(false);
      expect(deepEquals(NaN, null)).toEqual(false);
      expect(deepEquals(NaN, NaN)).toEqual(true);
      expect(deepEquals(null, [1])).toEqual(false);
      expect(deepEquals([1], null)).toEqual(false);
      expect(deepEquals(undefined, [1])).toEqual(false);
      expect(deepEquals([1], undefined)).toEqual(false);
    });
  });

  describe('arrays', () => {
    it('', () => {
      expect(deepEquals([0], [1])).toEqual(false);
      expect(deepEquals([0, 1, 2], [4, 5, 6])).toEqual(false);
      expect(deepEquals([0, 'abc', 2], [0, 'abc', '2'])).toEqual(false);
      expect(deepEquals([0, 'abc', '2'], [0, 'abc', 2])).toEqual(false);
      expect(deepEquals([null, null, true], [null, undefined, true])).toEqual(
        false
      );
      expect(deepEquals([null, undefined, true], [null, null, true])).toEqual(
        false
      );
      expect(deepEquals([0, 1, 2], [0, 1, 2])).toEqual(true);
      expect(deepEquals([0, 1, [1, 2, 3]], [0, 1, [1, 2, 3]])).toEqual(true);
      expect(deepEquals([{}], [{}])).toEqual(true);
      expect(deepEquals([{}, {}, []], [{}, {}, []])).toEqual(true);
      expect(deepEquals([], {})).toEqual(false);
      expect(deepEquals([], undefined)).toEqual(false);
      expect(deepEquals(undefined, [])).toEqual(false);
      expect(deepEquals([{}, null], [{}])).toEqual(false);
    });
  });

  describe('objects', () => {
    it('', () => {
      expect(deepEquals({}, {})).toEqual(true);
      expect(deepEquals({ a: 123 }, { a: '123' })).toEqual(false);
      expect(deepEquals({ 1: 1, 2: 2, 3: 3 }, { 1: 1, 2: 2, 3: 3 })).toEqual(
        true
      );
      expect(deepEquals({ 1: 1, 2: 2, 3: 3 }, { 2: 2, 1: 1, 3: 3 })).toEqual(
        true
      );
      expect(
        deepEquals(
          { 1: 1, 2: 2, 3: { a: 'a', b: 'b' } },
          { 2: 2, 1: 1, 3: { a: 'a', b: 'b' } }
        )
      ).toEqual(true);
      expect(
        deepEquals(
          { 1: 1, 2: 2, 3: { a: 'a', b: ['b', 23] } },
          { 2: 2, 1: 1, 3: { a: 'a', b: ['b', 23] } }
        )
      ).toEqual(true);
      expect(
        deepEquals(
          { 1: 1, 2: 2, 3: { a: 'a', b: ['b', 23] } },
          { 2: 2, 1: 1, 3: { a: 'a', b: ['b', 22] } }
        )
      ).toEqual(false);

      expect(deepEquals({}, null)).toEqual(false);
      expect(deepEquals(null, {})).toEqual(false);
      expect(deepEquals({}, undefined)).toEqual(false);
      expect(deepEquals(undefined, {})).toEqual(false);
    });
  });
});
