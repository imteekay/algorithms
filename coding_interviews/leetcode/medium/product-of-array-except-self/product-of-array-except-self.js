function productExceptSelf(nums) {
  let zeros = 0;
  let answer = [];
  let product = 1;

  for (let num of nums) {
    if (num) product *= num;
    else zeros++;
  }

  for (let num of nums) {
    if (num) {
      answer.push(zeros ? 0 : product / num);
    } else {
      answer.push(zeros > 1 ? 0 : product);
    }
  }

  return answer;
}
