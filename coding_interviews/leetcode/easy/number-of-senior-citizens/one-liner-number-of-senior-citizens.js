function countSeniors(details) {
  return details
    .filter((detail) => Number(detail.slice(11, 13)) > 60)
    .length;
};