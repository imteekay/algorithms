import { describe, expect, it } from 'vitest';
import { CustomStack } from '../design-a-stack-with-increment-operation';

describe('CustomStack', () => {
  it('', () => {
    const customStack = new CustomStack(3);

    customStack.push(1);
    customStack.push(2);

    expect(customStack.pop()).toEqual(2);

    customStack.push(2);
    customStack.push(3);
    customStack.push(4);

    customStack.increment(5, 100);
    customStack.increment(2, 100);

    expect(customStack.pop()).toEqual(103);
    expect(customStack.pop()).toEqual(202);
    expect(customStack.pop()).toEqual(201);
    expect(customStack.pop()).toEqual(-1);
  });
});
