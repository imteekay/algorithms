function peek(stack) {
  return stack[stack.length - 1];
}

function isEmpty(stack) {
  return stack.length === 0;
}

export function nextGreaterElement(nums1, nums2) {
  const stack = [];
  const hashmap = new Map();

  for (let num of nums2) {
    while (!isEmpty(stack) && num > peek(stack)) {
      hashmap.set(stack.pop(), num);
    }

    stack.push(num);
  }

  while (!isEmpty(stack)) {
    hashmap.set(stack.pop(), -1);
  }

  const result = [];

  for (let num of nums1) {
    if (hashmap.has(num)) {
      result.push(hashmap.get(num));
    } else {
      result.push(-1);
    }
  }

  return result;
}
