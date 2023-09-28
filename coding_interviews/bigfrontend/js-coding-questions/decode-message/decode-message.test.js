import { describe, expect, it } from 'vitest';
import { decode } from './decode-message';

describe('decode', () => {
  it('', () => {
    expect(decode([])).toEqual('');
    expect(decode([['A']])).toEqual('A');
    expect(decode([[['A'], ['B']]])).toEqual('A');
    expect(
      decode([
        ['I', 'B', 'C', 'A', 'L', 'K', 'A'],
        ['D', 'R', 'F', 'C', 'A', 'E', 'A'],
        ['G', 'H', 'O', 'E', 'L', 'A', 'D'],
      ])
    ).toEqual('IROCLED');
  });
});
