function sort(string) {
  return [...string].sort((c1, c2) => c1.localeCompare(c2)).join('');
}
