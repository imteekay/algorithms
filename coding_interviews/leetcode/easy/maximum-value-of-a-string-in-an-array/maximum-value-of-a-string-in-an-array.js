function maximumValue(strs) {
  return strs.reduce(
    (max, string) =>
      Math.max(
        max,
        Number.isNaN(Number(string)) ? string.length : Number(string)
      ),
    0
  );
}
