function isPowerOfTwo(n) {
  if (n <= 0) {
    return false;
  }

  while (n > 1) {
    if (n % 2 !== 0) {
      return false;
    }

    n /= 2;
  }

  return true;
}
