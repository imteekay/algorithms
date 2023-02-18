function toMinutes(stringTime) {
  const [hour, minutes] = stringTime.split(':');
  return Number(hour) * 60 + Number(minutes);
}

function convertTime(current, correct) {
  let count = 0;
  let minutes = toMinutes(correct) - toMinutes(current);

  while (minutes) {
    if (minutes >= 60) minutes -= 60;
    else if (minutes >= 15) minutes -= 15;
    else if (minutes >= 5) minutes -= 5;
    else minutes -= 1;
    count++;
  }

  return count;
}
