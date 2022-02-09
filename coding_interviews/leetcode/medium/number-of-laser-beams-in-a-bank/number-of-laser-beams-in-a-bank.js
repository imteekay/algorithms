/*
Anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array bank representing the floor plan of the bank, which is an m x n 2D matrix. bank[i] represents the ith row, consisting of '0's and '1's. '0' means the cell is empty, while'1' means the cell has a security device.

There is one laser beam between any two security devices if both conditions are met:

The two devices are located on two different rows: r1 and r2, where r1 < r2.
- For each row i where r1 < i < r2, there are no security devices in the ith row.
- Laser beams are independent, i.e., one beam does not interfere nor join with another.

Return the total number of laser beams in the bank.
*/

export function numberOfBeams(bank) {
  let lasersCount = 0;
  const securityDevices = [];

  for (let row = 0; row < bank.length; row++) {
    let numberOfSecurityDevices = 0;

    for (let col = 0; col < bank[row].length; col++) {
      numberOfSecurityDevices += Number(bank[row][col]);
    }

    if (numberOfSecurityDevices) {
      securityDevices.push(numberOfSecurityDevices);
    }
  }

  for (let i = 0; i < securityDevices.length - 1; i++) {
    lasersCount += securityDevices[i] * securityDevices[i + 1];
  }

  return lasersCount;
}
