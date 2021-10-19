// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate
// points = [] - not empty
// x and y positive numbers

const nearestValidPoint = (x, y, points) => {
  let minDistance = Infinity;
  let pointIndex = -1;

  points.forEach((point, index) => {
    if (isValid([x, y], point)) {
      const manhattanDistance = calculateManhattanDistance([x, y], point);
      if (manhattanDistance < minDistance) {
        pointIndex = index;
        minDistance = manhattanDistance;
      }
    }
  });

  return pointIndex;
};

const isValid = (position, point) => {
  const [x, y] = position;
  const [pointX, pointY] = point;
  return x === pointX || y === pointY;
};

const calculateManhattanDistance = (position, point) => {
  const [x, y] = position;
  const [pointX, pointY] = point;
  return Math.abs(x - pointX) + Math.abs(y - pointY);
};
