/*
You want to water n plants in your garden with a watering can. The plants are arranged in a row and are labeled from 0 to n - 1 from left to right where the ith plant is located at x = i. There is a river at x = -1 that you can refill your watering can at.

Each plant needs a specific amount of water. You will water the plants in the following way:

Water the plants in order from left to right.
After watering the current plant, if you do not have enough water to completely water the next plant, return to the river to fully refill the watering can.
You cannot refill the watering can early.
You are initially at the river (i.e., x = -1). It takes one step to move one unit on the x-axis.

Given a 0-indexed integer array plants of n integers, where plants[i] is the amount of water the ith plant needs, and an integer capacity representing the watering can capacity, return the number of steps needed to water all the plants.

Example 1:
Input: plants = [2,2,3,3], capacity = 5
Output: 14

Example 2:
Input: plants = [1,1,1,4,2,3], capacity = 4
Output: 30

Example 3:
Input: plants = [7,7,7,7,7,7,7], capacity = 8
Output: 49
*/

// [2, 2, 3, 3]
// capacity: 5 -> 3 -> 1
// steps:    1 -> 2 -> 4

export function wateringPlants(plants, capacity) {
  let steps = 0;
  const CAPACITY = capacity;

  for (let i = 0; i < plants.length; i++) {
    steps++;
    capacity -= plants[i];

    if (i < plants.length - 1 && capacity < plants[i + 1]) {
      steps += i + 1;
      steps += i + 1;
      capacity = CAPACITY;
    }
  }

  return steps;
}
