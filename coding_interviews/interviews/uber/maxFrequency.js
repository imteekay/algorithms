export function maxFrequency(numbers) {
  let maxFrequencyNumber = -1;
  let result = -1;
  let numberToFrequencyMap = {};

  for (let num of numbers) {
    if (numberToFrequencyMap[num]) {
      numberToFrequencyMap[num]++;
    } else {
      numberToFrequencyMap[num] = 1;
    }
  }

  Object.entries(numberToFrequencyMap).forEach(([num, frequency]) => {
    if (frequency > maxFrequencyNumber) {
      maxFrequencyNumber = frequency;
      result = Number(num);
    }
  });

  return result;
}
