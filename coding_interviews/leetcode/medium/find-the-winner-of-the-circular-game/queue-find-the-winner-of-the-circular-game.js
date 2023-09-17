// https://leetcode.com/problems/find-the-winner-of-the-circular-game

function buildQueue(n) {
  let queue = [];

  for (let num = 1; num <= n; num++) {
    queue.push(num);
  }

  return queue;
}

function findTheWinner(n, k) {
  let queue = buildQueue(n);

  while (queue.length > 1) {
    let count = 1;

    while (count < k) {
      queue.push(queue.shift());
      count++;
    }

    queue.shift();
  }

  return queue[0];
}
