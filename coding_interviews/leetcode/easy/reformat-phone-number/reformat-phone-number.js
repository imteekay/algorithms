function removeSpacesAndDashes(number) {
  return number.replaceAll('-', '').replaceAll(' ', '');
}

function reformatNumber(number) {
  let num = removeSpacesAndDashes(number);
  let blocks = [];
  let block = [];
  let blockLimit = 2;
  let numLength = num.length;

  for (let index = 0; index < numLength; index++) {
    if (block.length === 0) {
      if (numLength - index === 2) {
        blocks.push(num.slice(index));
        break;
      }

      if (numLength - index === 4) {
        blocks.push(num.slice(index, index + 2));
        blocks.push(num.slice(index + 2));
        break;
      }
    }

    if (index === blockLimit) {
      blockLimit = index + 3;
      block.push(num[index]);
      blocks.push(block.join(''));
      block = [];
    } else {
      block.push(num[index]);
    }
  }

  return blocks.join('-');
}
