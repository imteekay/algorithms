// https://leetcode.com/problems/relative-sort-array

const relativeSortArray = (arr1, arr2) => {
  const mapper1 = {};
  const mapper2 = {};

  arr2.forEach((num) => (mapper2[num] = true));

  arr1.forEach((num) => {
    if (mapper1[num]) mapper1[num].push(num);
    else if (mapper2[num]) mapper1[num] = [num];
    else if (mapper1['other']) mapper1['other'].push(num);
    else mapper1['other'] = [num];
  });

  const sortedArr = [];

  arr2.forEach((num) => {
    sortedArr.push(...mapper1[num]);
  });

  if (mapper1['other'])
    sortedArr.push(...mapper1['other'].sort((a, b) => a - b));

  return sortedArr;
};
