function separateDigits(nums) {
  const answer = [];

  for (let num of nums) {
    const numString = num.toString();

    for (let charNum of numString) {
      answer.push(Number(charNum));
    }
  }

  return answer;
}
