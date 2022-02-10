import { describe, expect, it } from 'vitest';
import { wateringPlants } from '../watering-plants';

describe('wateringPlants', () => {
  it('', () => {
    expect(wateringPlants([2, 2, 3, 3], 5)).toEqual(14);
  });

  it('', () => {
    expect(wateringPlants([1, 1, 1, 4, 2, 3], 4)).toEqual(30);
  });

  it('', () => {
    expect(wateringPlants([7, 7, 7, 7, 7, 7, 7], 8)).toEqual(49);
  });

  it('', () => {
    expect(wateringPlants([2, 1], 2)).toEqual(4);
  });

  it('', () => {
    expect(wateringPlants([3, 2, 4, 2, 1], 6)).toEqual(17);
  });
});
