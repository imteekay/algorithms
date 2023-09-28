// https://bigfrontend.dev/problem/first-bad-version

/*
 * type IsBad = (version: number) => boolean
 * @param {IsBad} isBad
 */
export function firstBadVersion(isBad) {
  return (version) => {
    let first = -1;
    let start = 0;
    let end = version;
    let middle = Math.floor((start + end) / 2);

    while (start <= end) {
      if (isBad(middle)) {
        first = middle;
        end = middle - 1;
      } else {
        start = middle + 1;
      }

      middle = Math.floor((start + end) / 2);
    }

    return first;
  };
}
