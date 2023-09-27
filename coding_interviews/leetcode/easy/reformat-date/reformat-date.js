// https://leetcode.com/problems/reformat-date

function getDateInfo(date) {
  let dateInfo = [];
  let info = '';

  for (let index = 0; index < date.length; index++) {
    let char = date[index];
    if (char === ' ') {
      dateInfo.push(info);
      info = '';
    } else if (index === date.length - 1) {
      dateInfo.push(info + char);
    } else {
      info += char;
    }
  }

  return dateInfo;
}

const monthStringToNumber = {
  Jan: '01',
  Feb: '02',
  Mar: '03',
  Apr: '04',
  May: '05',
  Jun: '06',
  Jul: '07',
  Aug: '08',
  Sep: '09',
  Oct: '10',
  Nov: '11',
  Dec: '12',
};

function formatDay(day) {
  return day.length === 1 ? `0${day}` : day;
}

function reformatDate(date) {
  let [day, month, year] = getDateInfo(date);
  let dateDay = '';
  let dateMonth = monthStringToNumber[month];

  for (let char of day) {
    if (!Number.isNaN(Number(char))) {
      dateDay += char;
    }
  }

  return `${year}-${dateMonth}-${formatDay(dateDay)}`;
}
