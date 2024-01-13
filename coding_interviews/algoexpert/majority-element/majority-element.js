// Runtime: O(N^2)
// Space: O(N)

function majorityElement(array) {
  let half = Math.floor(array.length / 2);

  if (array.length <= 1) return array[0];

  for (let i = 0; i < array.length; i++) {
    let count = 1;
    let number = array[i];

    for (let k = i + 1; k < array.length; k++) {
      if (array[k] === number) {
        count++;
      }

      if (count > half) {
        return number;
      }
    }
  }
}
