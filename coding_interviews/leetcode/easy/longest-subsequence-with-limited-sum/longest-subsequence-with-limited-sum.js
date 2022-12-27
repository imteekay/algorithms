function immutableSort(nums) {
  return [...nums].sort((a, b) => a - b);
}

function buildAllSums(nums) {
  let allSums = [];
  let sum = 0;

  for (num of nums) {
    sum += num;
    allSums.push(sum);
  }

  return allSums;
}

function answerQueries(nums, queries) {
  let answer = [];
  let sortedNums = immutableSort(nums);
  let allSums = buildAllSums(sortedNums);

  for (let query of queries) {
    let num;

    for (let index = 0; index < allSums.length; index++) {
      let sum = allSums[index];

      if (sum <= query) {
        num = index + 1;
        if (index === allSums.length - 1) answer.push(num);
      } else {
        if (num) answer.push(num);
        break;
      }
    }

    if (!num) answer.push(0);
  }

  return answer;
}
