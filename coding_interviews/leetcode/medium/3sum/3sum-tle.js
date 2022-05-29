function sortTriplet(num1, num2, num3) {
  return [num1, num2, num3].sort((n1, n2) => n1 - n2);
}

function getSortedTripletString(num1, num2, num3) {
  let triplet = sortTriplet(num1, num2, num3);
  return `${triplet[0]}*${triplet[1]}*${triplet[2]}`;
}

function threeSum(nums) {
  if (nums.length < 3) {
    return [];
  }

  let triplets = [];
  let numberCount = {};
  let usedTriplets = {};
  let usedPairs = {};

  for (let num of nums) {
    if (numberCount[num]) {
      numberCount[num]++;
    } else {
      numberCount[num] = 1;
    }
  }

  for (let i = 0; i < nums.length - 1; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      let num1 = nums[i];
      let num2 = nums[j];
      let pairSum = num1 + num2;
      let missingTriplet = pairSum * -1;
      let sortedPairString = `${Math.min(num1, num2)}*${Math.max(num1, num2)}`;

      if (usedPairs[sortedPairString]) {
        continue;
      }

      let sortedTripletString = getSortedTripletString(
        num1,
        num2,
        missingTriplet
      );

      if (usedTriplets[sortedTripletString]) {
        continue;
      }

      if (
        (missingTriplet === num1 &&
          missingTriplet === num2 &&
          numberCount[missingTriplet] &&
          numberCount[missingTriplet] >= 3) ||
        (((missingTriplet === num1 && missingTriplet !== num2) ||
          (missingTriplet !== num1 && missingTriplet === num2)) &&
          numberCount[missingTriplet] &&
          numberCount[missingTriplet] >= 2) ||
        (missingTriplet !== num1 &&
          missingTriplet !== num2 &&
          numberCount[missingTriplet])
      ) {
        triplets.push([num1, num2, missingTriplet]);
        usedTriplets[sortedTripletString] = true;
        usedPairs[sortedPairString] = true;
        continue;
      }
    }
  }

  return triplets;
}
