import { describe, expect, it } from 'vitest';
import { numberOfBeams } from '../number-of-laser-beams-in-a-bank';

describe('numberOfBeams', () => {
  it('', () => {
    expect(numberOfBeams(['011001', '000000', '010100', '001000'])).toEqual(8);
  });

  it('', () => {
    expect(numberOfBeams(['000', '111', '000'])).toEqual(0);
  });
});
