// Runtime: O(N), N = seats length
// Space: O(1)

function bestSeat(seats) {
  let sequenceIndex;
  let sequenceIndexTemp;
  let sequenceLength = 0;
  let maxSequenceLength = 0;

  for (let index = 1; index < seats.length; index++) {
    let seat = seats[index];

    if (seat === 0) {
      sequenceLength++;

      if (!sequenceIndexTemp) {
        sequenceIndexTemp = index;
      }
    } else {
      if (sequenceLength > maxSequenceLength) {
        maxSequenceLength = sequenceLength;
        sequenceIndex = sequenceIndexTemp;
      }

      sequenceLength = 0;
      sequenceIndexTemp = undefined;
    }
  }

  if (maxSequenceLength <= 0) {
    return -1;
  }

  return maxSequenceLength % 2 === 0
    ? sequenceIndex + Math.floor(maxSequenceLength / 2) - 1
    : sequenceIndex + Math.floor(maxSequenceLength / 2);
}
