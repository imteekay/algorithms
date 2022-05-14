function solution(isBadVersion) {
  return function (n) {
    for (let version = 1; version <= n; version++) {
      if (isBadVersion(version)) {
        return version;
      }
    }
  };
}
