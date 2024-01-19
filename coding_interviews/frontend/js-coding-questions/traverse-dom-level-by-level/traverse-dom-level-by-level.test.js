import { describe, expect, it } from 'vitest';
import { flatten } from './traverse-dom-level-by-level';

const createNode = (name, children = []) => ({
  name,
  children,
});

describe('flatten', () => {
  it('', () => {
    expect(flatten(null)).toEqual([]);
  });

  it('', () => {
    const button = createNode('button');
    const p = createNode('p', [button]);
    const div = createNode('div', [p]);
    const p2 = createNode('p');
    const div2 = createNode('div', [p2, div]);
    const img = createNode('img');
    const a = createNode('a', [img]);
    const p3 = createNode('p', [a]);
    const button1 = createNode('button');
    const p4 = createNode('p', [button1]);
    const root = createNode('div', [p4, p3, div2]);

    const tree = root;

    expect(flatten(tree)).toEqual([
      root,
      p4,
      p3,
      div2,
      button1,
      a,
      p2,
      div,
      img,
      p,
      button,
    ]);
  });
});
