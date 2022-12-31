function timeRequiredToBuy(tickets, k) {
  let count = 0;
  let pointer = 0;

  while (tickets[k]) {
    if (tickets[pointer]) {
      tickets[pointer]--;
      count++;
    }

    pointer = (pointer + 1) % tickets.length;
  }

  return count;
}
