function toNumber(char) {
  return char.charCodeAt(0) - 64;
}

function titleToNumber(columnTitle) {
  let columnNumber = 0;

  for (let col of columnTitle) {
    const num = toNumber(col);
    columnNumber = columnNumber * 26 + num;
  }

  return columnNumber;
}
