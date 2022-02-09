/*
There are n rings and each ring is either red, green, or blue. The rings are distributed across ten rods labeled from 0 to 9.

You are given a string rings of length 2n that describes the n rings that are placed onto the rods. Every two characters in rings forms a color-position pair that is used to describe each ring where:

The first character of the ith pair denotes the ith ring's color ('R', 'G', 'B').
The second character of the ith pair denotes the rod that the ith ring is placed on ('0' to '9').
For example, "R3G2B1" describes n == 3 rings: a red ring placed onto the rod labeled 3, a green ring placed onto the rod labeled 2, and a blue ring placed onto the rod labeled 1.

Return the number of rods that have all three colors of rings on them.

Input: rings = "B0B6G0R6R0R6G9"
Output: 1

Input: rings = "B0R0G0R9R0B0G0"
Output: 1
*/

export function countPoints(rings = '') {
  const rods = {
    0: new Set(),
    1: new Set(),
    2: new Set(),
    3: new Set(),
    4: new Set(),
    5: new Set(),
    6: new Set(),
    7: new Set(),
    8: new Set(),
    9: new Set(),
  };

  for (let i = 0; i < rings.length - 1; i += 2) {
    const color = rings[i];
    const position = rings[i + 1];
    rods[position].add(color);
  }

  return Object.values(rods).reduce(
    (count, colors) => (colors.size === 3 ? count + 1 : count),
    0
  );
}
