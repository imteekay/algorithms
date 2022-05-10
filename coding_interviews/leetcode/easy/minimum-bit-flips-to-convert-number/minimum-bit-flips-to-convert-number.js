function toBinary(number) {
  const binary = [];

  while (number) {
    binary.push((number % 2).toString());
    number = Math.floor(number / 2);
  }

  return binary;
}

export function minBitFlips(start, goal) {
  const startBinary = toBinary(start);
  const goalBinary = toBinary(goal);
  const greatestLength =
    startBinary.length > goalBinary.length
      ? startBinary.length
      : goalBinary.length;

  let flips = 0;

  for (let i = 0; i < greatestLength; i++) {
    const startBit = startBinary[i] || '0';
    const goalBit = goalBinary[i] || '0';

    if (startBit !== goalBit) {
      flips++;
    }
  }

  return flips;
}
