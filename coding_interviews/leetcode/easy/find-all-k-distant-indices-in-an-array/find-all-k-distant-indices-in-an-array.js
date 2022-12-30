function getJs(nums, key) {
  let js = [];

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] === key) js.push(index);
  }

  return js;
}

function isKDistant(index, js, k) {
  for (let j of js) {
    if (Math.abs(index - j) <= k) return true;
  }

  return false;
}

function findKDistantIndices(nums, key, k) {
  const js = getJs(nums, key);
  const output = [];
  console.log('js', js);

  for (let index = 0; index < nums.length; index++) {
    if (isKDistant(index, js, k)) {
      output.push(index);
    }
  }

  return output;
}
