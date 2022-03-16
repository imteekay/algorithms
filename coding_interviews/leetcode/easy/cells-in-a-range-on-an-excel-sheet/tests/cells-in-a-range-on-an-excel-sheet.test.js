import { describe, it, expect } from 'vitest';
import { cellsInRange } from '../cells-in-a-range-on-an-excel-sheet';

describe('cellsInRange', () => {
  it('', () => {
    expect(cellsInRange('U7:X9')).toEqual([
      'U7',
      'U8',
      'U9',
      'V7',
      'V8',
      'V9',
      'W7',
      'W8',
      'W9',
      'X7',
      'X8',
      'X9',
    ]);
  });

  it('', () => {
    expect(cellsInRange('P7:Z7')).toEqual([
      'P7',
      'Q7',
      'R7',
      'S7',
      'T7',
      'U7',
      'V7',
      'W7',
      'X7',
      'Y7',
      'Z7',
    ]);
  });

  it('', () => {
    expect(cellsInRange('K1:L2')).toEqual(['K1', 'K2', 'L1', 'L2']);
  });

  it('', () => {
    expect(cellsInRange('A1:F1')).toEqual(['A1', 'B1', 'C1', 'D1', 'E1', 'F1']);
  });

  it('', () => {
    expect(cellsInRange('K2:L3')).toEqual(['K2', 'K3', 'L2', 'L3']);
  });
});
