// https://leetcode.com/problems/calculate-delayed-arrival-time

function findDelayedArrivalTime(arrivalTime, delayedTime) {
  return (arrivalTime + delayedTime) % 24;
}
