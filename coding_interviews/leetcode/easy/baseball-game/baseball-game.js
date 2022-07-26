function calPoints(ops) {
  const record = [];

  for (let op of ops) {
    if (op === 'C') {
      record.pop();
    } else if (op === 'D') {
      const lastOp = record[record.length - 1];
      record.push(lastOp * 2);
    } else if (op === '+') {
      const lastOp = record[record.length - 1];
      const penultimateOp = record[record.length - 2];
      record.push(lastOp + penultimateOp);
    } else {
      record.push(Number(op));
    }
  }

  return record.reduce((recordItem, sum) => sum + recordItem, 0);
}
