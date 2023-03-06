function isEvent(num) {
  return num % 2 === 0;
}

function alternateDigitSum(n) {
  let output = 0;
  let nString = n.toString();

  for (let index = 0; index < nString.length; index++) {
    if (isEvent(index)) output += Number(nString[index]);
    else output += Number(nString[index]) * -1;
  }

  return output;
}
