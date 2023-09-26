import { describe, expect, it } from 'vitest';
import { urlify, urlifyForward } from './urlify';

describe('urlify', () => {
  it('', () => {
    expect(urlify('Mr John Smith     ', 13)).toEqual('Mr%20John%20Smith');
  });
});

describe('urlifyForward', () => {
  it('', () => {
    expect(urlifyForward('Mr John Smith     ', 13)).toEqual(
      'Mr%20John%20Smith'
    );
  });
});
