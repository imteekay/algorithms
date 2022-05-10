function findFinalValue(nums, original) {
  let keepProcessing = true;
  let originalCopy = original;

  while (keepProcessing) {
    let foundOriginal = false;

    for (let num of nums) {
      if (num === originalCopy) {
        foundOriginal = true;
      }
    }

    if (foundOriginal) {
      originalCopy *= 2;
    } else {
      keepProcessing = false;
    }
  }

  return originalCopy;
}
