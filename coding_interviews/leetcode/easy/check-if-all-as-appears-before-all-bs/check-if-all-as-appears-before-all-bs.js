function checkString(s) {
  let gotFirstB = false;

  for (let char of s) {
    if (char === 'b' && !gotFirstB) {
      gotFirstB = true;
    }

    if (char === 'a' && gotFirstB) {
      return false;
    }
  }

  return true;
}
