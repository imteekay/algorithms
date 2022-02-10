/*
You are given a 0-indexed integer array nums and an integer pivot. Rearrange nums such that the following conditions are satisfied:

Every element less than pivot appears before every element greater than pivot.
Every element equal to pivot appears in between the elements less than and greater than pivot.
The relative order of the elements less than pivot and the elements greater than pivot is maintained.
More formally, consider every pi, pj where pi is the new position of the ith element and pj is the new position of the jth element. For elements less than pivot, if i < j and nums[i] < pivot and nums[j] < pivot, then pi < pj. Similarly for elements greater than pivot, if i < j and nums[i] > pivot and nums[j] > pivot, then pi < pj.

Return nums after the rearrangement.
*/

export function pivotArray(nums, pivot) {
  const lessThanPivot = [];
  const equalToPivot = [];
  const greaterThanPivot = [];

  nums.forEach((num) => {
    if (num === pivot) {
      equalToPivot.push(num);
    }

    if (num < pivot) {
      lessThanPivot.push(num);
    }

    if (num > pivot) {
      greaterThanPivot.push(num);
    }
  });

  return [...lessThanPivot, ...equalToPivot, ...greaterThanPivot];
}
