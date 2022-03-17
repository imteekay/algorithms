const alphabet = ' ABCDEFGHIJKLMNOPQRSTUVWXYZ';

export function cellsInRange(s) {
  const result = [];

  for (
    let alpha = alphabet.indexOf(s[0]);
    alpha <= alphabet.indexOf(s[3]);
    alpha++
  ) {
    for (let i = Number(s[1]); i <= Number(s[4]); i++) {
      result.push(alphabet[alpha] + i.toString());
    }
  }

  return result;
}
