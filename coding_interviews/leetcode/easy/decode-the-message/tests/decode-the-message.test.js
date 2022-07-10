import { describe, expect, it } from 'vitest';
import { decodeMessage } from '../decode-the-message';

describe('decodeMessage', () => {
  it('', () => {
    expect(
      decodeMessage(
        'eljuxhpwnyrdgtqkviszcfmabo',
        'zwx hnfx lqantp mnoeius ycgk vcnjrdb'
      )
    ).toEqual('the five boxing wizards jump quickly');
  });

  it('', () => {
    expect(
      decodeMessage(
        'the quick brown fox jumps over the lazy dog',
        'vkbs bs t suepuv'
      )
    ).toEqual('this is a secret');
  });
});
