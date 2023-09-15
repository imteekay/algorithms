function removeTrailingZeros(num) {
  let result = '';
  let trailing = true;

  for (let index = num.length - 1; index >= 0; index--) {
    if (num[index] === '0' && trailing) {
      continue;
    } else {
      trailing = false;
      result = num[index] + result;
    }
  }

  return result;
}
