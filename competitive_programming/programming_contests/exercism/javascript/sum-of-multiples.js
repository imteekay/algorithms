export const sum = (multiples, limit) => {
  let sum = 0;
  let counted = {};

  multiples.forEach((multiple) => {
    if (!multiple) return;

    let increment = multiple;

    while (increment < limit) {
      if (!counted[increment]) sum += increment;
      counted[increment] = true;
      increment += multiple;
    }
  });

  return sum;
};
