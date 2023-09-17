// https://leetcode.com/problems/find-the-winner-of-the-circular-game

function toArray(n) {
  let list = [];

  for (let num = 1; num <= n; num++) {
    list.push(num);
  }

  return list;
}

function findTheWinner(n, k) {
  let list = toArray(n);
  let index = 0;

  while (list.length > 1) {
    index = (index + k - 1) % list.length;
    list.splice(index, 1);
  }

  return list[0];
}
