import { describe, expect, it } from 'vitest';
import { linearSearch } from '../linear-search';

describe('linearSearch', () => {
  it('linear search array', () => {
    const foo = [1, 3, 4, 69, 71, 81, 90, 99, 420, 1337, 69420];

    expect(linearSearch(foo, 69)).toBeTruthy();
    expect(linearSearch(foo, 1336)).toBeFalsy();
    expect(linearSearch(foo, 69420)).toBeTruthy();
    expect(linearSearch(foo, 69421)).toBeFalsy();
    expect(linearSearch(foo, 1)).toBeTruthy();
    expect(linearSearch(foo, 0)).toBeFalsy();
  });
});
