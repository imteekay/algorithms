function digitCount(num) {
  let counter = new Map();

  for (let digit of num) {
    if (counter.has(digit)) {
      counter.set(digit, counter.get(digit) + 1);
    } else {
      counter.set(digit, 1);
    }
  }

  for (let index = 0; index < num.length; index++) {
    let digit = num[index];
    let indexString = index.toString();

    if (
      counter.has(indexString) &&
      counter.get(indexString) !== Number(digit)
    ) {
      return false;
    }

    if (!counter.has(indexString) && digit !== '0') {
      return false;
    }
  }

  return true;
}
