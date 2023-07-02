function findArray(pref) {
  let output = [pref[0]];

  for (let index = 1; index < pref.length; index++) {
    output.push(pref[index - 1] ^ pref[index]);
  }

  return output;
}
