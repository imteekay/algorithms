import { describe, expect, it } from 'vitest';
import { backspaceCompare } from '../';

describe('backspaceCompare', () => {
  it('', () => {
    expect(backspaceCompare('ab#c', 'ad#c')).toBeTruthy();
  });

  it('', () => {
    expect(backspaceCompare('ab##', 'c#d#')).toBeTruthy();
  });

  it('', () => {
    expect(backspaceCompare('a#c', 'b')).toBeFalsy();
  });
});
