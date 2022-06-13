import { describe, expect, it } from 'vitest';
import { areAnagrams } from '../are-anagrams';

describe('areAnagrams', () => {
  it('', () => {
    expect(areAnagrams('', '')).toBeTruthy();
  });

  it('', () => {
    expect(areAnagrams('a', 'a')).toBeTruthy();
  });

  it('', () => {
    expect(areAnagrams('bla', 'alb')).toBeTruthy();
  });

  it('', () => {
    expect(areAnagrams('hahahehe', 'hehehaha')).toBeTruthy();
  });

  it('', () => {
    expect(areAnagrams('a', 'b')).toBeFalsy();
  });

  it('', () => {
    expect(areAnagrams('aa', 'a')).toBeFalsy();
  });

  it('', () => {
    expect(areAnagrams('bla', 'elb')).toBeFalsy();
  });

  it('', () => {
    expect(areAnagrams(' ', '  ')).toBeFalsy();
  });
});
