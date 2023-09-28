import { describe, expect, it } from 'vitest';
import { oneAway } from './one-away';

describe('oneAway', () => {
  it('', () => {
    expect(oneAway('pale', 'ple')).toEqual(true);
    expect(oneAway('pale', 'pale')).toEqual(true);
    expect(oneAway('pales', 'pale')).toEqual(true);
    expect(oneAway('pale', 'bale')).toEqual(true);
    expect(oneAway('paalle', 'paklle')).toEqual(true);
    expect(oneAway('paalle', 'paklle')).toEqual(true);
    expect(oneAway('1203', '1213')).toEqual(true);
    expect(oneAway('pale', 'bake')).toEqual(false);
    expect(oneAway('palee', 'ple')).toEqual(false);
  });
});
