export function linearSearch(list, value) {
  for (let item of list) {
    if (item === value) {
      return true;
    }
  }

  return false;
}
