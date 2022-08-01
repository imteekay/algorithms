export function nextGreaterElement(nums1, nums2) {
  const result = [];

  for (let num1 of nums1) {
    let foundNumber = false;
    let foundNextGreaterElement = false;

    for (let num2 of nums2) {
      if (num1 === num2) {
        foundNumber = true;
      }

      if (foundNumber && num2 > num1) {
        result.push(num2);
        foundNextGreaterElement = true;
        break;
      }
    }

    if (!foundNextGreaterElement) {
      result.push(-1);
    }
  }

  return result;
}
