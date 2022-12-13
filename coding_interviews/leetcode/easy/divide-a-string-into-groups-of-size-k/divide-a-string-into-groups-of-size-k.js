function fillChar(lastGroup, fill, length) {
  let chars = [];

  for (let i = 1; i <= length; i++) {
    chars.push(fill);
  }

  return lastGroup + chars.join('');
}

function divideString(s, k, fill) {
  let groups = [];
  let groupSize = 0;
  let group = [];

  for (let index = 0; index < s.length; index++) {
    group.push(s[index]);
    groupSize++;

    if (groupSize === k) {
      groups.push(group.join(''));
      groupSize = 0;
      group = [];
    } else if (index === s.length - 1) {
      groups.push(group.join(''));
    }
  }

  let lastGroup = groups[groups.length - 1];
  let lastGroupLength = lastGroup.length;

  if (lastGroupLength !== k) {
    lastGroup = fillChar(lastGroup, fill, k - lastGroupLength);
    groups[groups.length - 1] = lastGroup;
  }

  return groups;
}
