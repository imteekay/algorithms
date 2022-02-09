import { describe, expect, it } from 'vitest';
import { countPoints } from '../rings-and-rods';

describe('countPoints', () => {
  it('', () => {
    expect(countPoints('B0B6G0R6R0R6G9')).toEqual(1);
  });

  it('', () => {
    expect(countPoints('B0R0G0R9R0B0G0')).toEqual(1);
  });
});
