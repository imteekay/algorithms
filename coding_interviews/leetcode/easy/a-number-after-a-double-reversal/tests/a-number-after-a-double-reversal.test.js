import { describe, it, expect } from 'vitest';
import { isSameAfterReversals } from '../a-number-after-a-double-reversal';

describe('isSameAfterReversals', () => {
  it('', () => {
    expect(isSameAfterReversals(526)).toBeTruthy();
  });

  it('', () => {
    expect(isSameAfterReversals(1800)).toBeFalsy();
  });

  it('', () => {
    expect(isSameAfterReversals(0)).toBeTruthy();
  });

  it('', () => {
    expect(isSameAfterReversals(609576)).toBeTruthy();
  });
});
