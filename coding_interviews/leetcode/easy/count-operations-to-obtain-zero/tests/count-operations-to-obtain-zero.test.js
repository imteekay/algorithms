import { describe, expect, it } from 'vitest';
import { countOperations } from '../count-operations-to-obtain-zero';

describe('countOperations', () => {
  it('', () => {
    expect(countOperations(2, 3)).toEqual(3);
  });

  it('', () => {
    expect(countOperations(10, 10)).toEqual(1);
  });
});
