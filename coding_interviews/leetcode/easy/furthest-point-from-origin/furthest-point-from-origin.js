// https://leetcode.com/problems/furthest-point-from-origin

function furthestDistanceFromOrigin(moves) {
  let diff = 0;
  let underlines = 0;

  for (let move of moves) {
    if (move === '_') underlines++;
    if (move === 'R') diff++;
    if (move === 'L') diff--;
  }

  return Math.abs(diff) + underlines;
}
