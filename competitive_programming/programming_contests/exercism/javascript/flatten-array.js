export const flatten = (list) => {
  const result = [];

  list.forEach((item) => {
    if (Array.isArray(item)) {
      result.push(...flatten(item));
    } else if (item !== undefined && item !== null) {
      result.push(item);
    }
  });

  return result;
};
