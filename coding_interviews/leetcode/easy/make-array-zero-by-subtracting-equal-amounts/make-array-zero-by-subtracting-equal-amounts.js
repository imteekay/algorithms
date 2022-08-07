function minimumOperationsAllInOne(nums) {
  let count = 0;
  let smallest = 0;

  for (let num of nums) {
    if (num > 0) {
      smallest = smallest ? Math.min(smallest, num) : num;
    }
  }

  while (smallest) {
    let smallestToSubtract = smallest;
    smallest = 0;

    for (let index = 0; index < nums.length; index++) {
      let subtractionResult = nums[index] - smallestToSubtract;
      nums[index] = subtractionResult > 0 ? subtractionResult : 0;

      if (subtractionResult > 0) {
        smallest = smallest
          ? Math.min(smallest, subtractionResult)
          : subtractionResult;
      }
    }

    count++;
  }

  return count;
}

// --------------------------------------------------

function smallestExceptZeros(smallest, num) {
  return smallest ? Math.min(smallest, num) : num;
}

function getSmallest(nums) {
  let smallest = 0;

  for (let num of nums) {
    if (num > 0) {
      smallest = smallestExceptZeros(smallest, num);
    }
  }

  return smallest;
}

function performSubtraction(nums, smallestToSubtract, smallest) {
  for (let index = 0; index < nums.length; index++) {
    let subtractionResult = nums[index] - smallestToSubtract;
    nums[index] = subtractionResult > 0 ? subtractionResult : 0;

    if (subtractionResult > 0) {
      smallest = smallestExceptZeros(smallest, subtractionResult);
    }
  }

  return smallest;
}

function minimumOperations(nums) {
  let count = 0;
  let smallest = getSmallest(nums);

  while (smallest) {
    smallest = performSubtraction(nums, smallest, 0);
    count++;
  }

  return count;
}

// --------------------------------------------------

function minimumOperationsSet(nums) {
  return new Set(nums.filter((num) => num !== 0));
}
