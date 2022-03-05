import { describe, it, expect } from 'vitest';
import { prefixCount } from '../counting-words-with-a-given-prefix';

describe('prefixCount', () => {
  it('matches 2 words', () => {
    expect(
      prefixCount(['pay', 'attention', 'practice', 'attend'], 'at')
    ).toEqual(2);
  });

  it('matches 3 words', () => {
    expect(
      prefixCount(['pay', 'attention', 'practice', 'attend', 'at'], 'at')
    ).toEqual(3);
  });

  it('matches no word', () => {
    expect(
      prefixCount(['leetcode', 'win', 'loops', 'success'], 'code')
    ).toEqual(0);
  });
});
