import { describe, expect, it } from 'vitest';
import { removeOuterParentheses } from '../remove-outermost-parentheses';

describe('removeOuterParentheses', () => {
  it('', () => {
    expect(removeOuterParentheses('(()())(())')).toEqual('()()()');
  });

  it('', () => {
    expect(removeOuterParentheses('(()())(())(()(()))')).toEqual(
      '()()()()(())'
    );
  });

  it('', () => {
    expect(removeOuterParentheses('()()')).toEqual('');
  });
});
