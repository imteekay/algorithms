function toBinary(num) {
  if (num === 0) return { binary: '0', numberOfOneBits: 0 };

  let binary = [];
  let numberOfOneBits = 0;
  let numCopy = num;

  while (numCopy > 0) {
    const binaryDigit = numCopy % 2;
    if (binaryDigit) numberOfOneBits++;
    binary.unshift(String(binaryDigit));
    numCopy = Math.floor(numCopy / 2);
  }

  return { num, binary: binary.join(''), numberOfOneBits };
}

function byNumberOfOneBits(binary1, binary2) {
  if (binary1.numberOfOneBits < binary2.numberOfOneBits) return -1;
  if (binary1.numberOfOneBits > binary2.numberOfOneBits) return 1;
  if (
    binary1.numberOfOneBits === binary2.numberOfOneBits &&
    binary1.num < binary2.num
  )
    return -1;
  return 0;
}

function sortByBits(nums) {
  const hashmap = new Map();
  const binaries = [];
  const result = [];

  for (let num of nums) {
    const binary = toBinary(num);
    hashmap.set(binary.binary, num);
    binaries.push(binary);
  }

  binaries.sort(byNumberOfOneBits);

  for (let { binary } of binaries) {
    result.push(hashmap.get(binary));
  }

  return result;
}
