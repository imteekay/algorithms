function getMiddle(start, end) {
  return Math.floor((start + end) / 2);
}

function binarySearchFirstBadVersion(isBadVersion) {
  return (n) => {
    let start = 1;
    let end = n;
    let middle = getMiddle(start, end);
    let firstBadVersion = middle;

    while (start < end) {
      if (isBadVersion(middle)) {
        end = middle - 1;
      } else {
        start = middle + 1;
      }

      middle = getMiddle(start, end);

      if (isBadVersion(middle)) {
        firstBadVersion = middle;
      }
    }

    return firstBadVersion;
  };
}

function solution(isBadVersion) {
  return binarySearchFirstBadVersion(isBadVersion);
}
