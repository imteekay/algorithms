function sort(nums) {
  return [...nums].sort((a, b) => a - b);
}

export function minMovesToSeat(seats, students) {
  const sortedSeats = sort(seats);
  const sortedStudents = sort(students);
  const N = seats.length;

  let moves = 0;

  for (let i = 0; i < N; i++) {
    moves += Math.abs(sortedSeats[i] - sortedStudents[i]);
  }

  return moves;
}
