function zeroToHero(numbers) {
  const allButZeros = numbers.filter((number) => number);
  const zerosCount = numbers.filter((number) => !number).length;
  const zeros = new Array(zerosCount).fill(0);

  return [...allButZeros, ...zeros];
}
