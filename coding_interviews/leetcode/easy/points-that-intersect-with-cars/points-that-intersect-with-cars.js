// https://leetcode.com/problems/points-that-intersect-with-cars

function numberOfPoints(nums) {
  let map = new Map();
  let points = 0;

  for ([start, end] of nums) {
    for (let num = start; num <= end; num++) {
      if (!map.has(num)) {
        points++;
        map.set(num, true);
      }
    }
  }

  return points;
}
