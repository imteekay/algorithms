function countVowelStrings(n) {
  let a = 1,
    e = 1,
    i = 1,
    o = 1,
    u = 1;

  for (let counter = 1; counter < n; counter++) {
    o += u;
    i += o;
    e += i;
    a += e;
  }

  return a + e + i + o + u;
}
