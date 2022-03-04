import { describe, expect, it } from 'vitest';
import { LinkedList, Node } from '../linked-list';

describe('LinkedList', () => {
  it('verifies linked list behavior', () => {
    const linkedList = new LinkedList();
    expect(linkedList.isEmpty()).toBeTruthy();
    expect(linkedList.size()).toEqual(0);

    linkedList.pushFront(1);
    expect(linkedList.isEmpty()).toBeFalsy();
    expect(linkedList.size()).toEqual(1);
    expect(linkedList.head).toEqual(new Node(1));

    linkedList.pushBack(2);
    linkedList.pushBack(3);
    linkedList.pushBack(4);
    expect(linkedList.size()).toEqual(4);

    linkedList.pushFront(0);
    expect(linkedList.size()).toEqual(5);

    expect(linkedList.search(0)).toBeTruthy();
    expect(linkedList.search(1)).toBeTruthy();
    expect(linkedList.search(2)).toBeTruthy();
    expect(linkedList.search(3)).toBeTruthy();
    expect(linkedList.search(4)).toBeTruthy();
    expect(linkedList.search(5)).toBeFalsy();

    linkedList.remove(5);
    expect(linkedList.size()).toEqual(5);

    linkedList.remove(0);
    expect(linkedList.size()).toEqual(4);

    linkedList.remove(4);
    expect(linkedList.size()).toEqual(3);

    linkedList.remove(2);
    expect(linkedList.size()).toEqual(2);

    linkedList.remove(1);
    expect(linkedList.size()).toEqual(1);

    linkedList.remove(3);
    expect(linkedList.size()).toEqual(0);
    expect(linkedList.isEmpty()).toBeTruthy();
  });
});
