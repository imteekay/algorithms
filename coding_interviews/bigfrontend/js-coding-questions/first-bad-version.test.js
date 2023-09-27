import { describe, expect, it } from 'vitest';
import { firstBadVersion } from './first-bad-version';

describe('firstBadVersion', () => {
  it('', () => {
    expect(firstBadVersion((i) => i >= 4)(100)).toEqual(4);
    expect(firstBadVersion((i) => i >= 4)(4)).toEqual(4);
    expect(firstBadVersion((i) => i >= 5)(3)).toEqual(-1);
    expect(firstBadVersion((i) => i >= 1)(1)).toEqual(1);
    expect(firstBadVersion((i) => i >= 1)(2)).toEqual(1);
  });
});
