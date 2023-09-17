function countSeniors(details) {
  let count = 0;

  for (let detail of details) {
    if (Number(detail.slice(11, 13)) > 60) {
      count++;
    }
  }

  return count;
}
