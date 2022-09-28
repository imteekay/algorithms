export function bubbleSort(numbers) {
  for (let N = 0; N < numbers.length; N++) {
    for (let index = 0; index < numbers.length - N - 1; index++) {
      if (numbers[index] > numbers[index + 1]) {
        let number = numbers[index];
        numbers[index] = numbers[index + 1];
        numbers[index + 1] = number;
      }
    }
  }

  return numbers;
}
