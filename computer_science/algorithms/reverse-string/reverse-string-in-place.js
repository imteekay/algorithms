function reverseString(s) {
  let pointer1 = 0;
  let pointer2 = s.length - 1;
  let auxiliaryChar;

  while (pointer1 < pointer2) {
    auxiliaryChar = s[pointer1];
    s[pointer1] = s[pointer2];
    s[pointer2] = auxiliaryChar;
    pointer1++;
    pointer2--;
  }
}
