function initPeopleCandies(numPeople) {
  let peopleCandies = [];

  for (let i = 0; i < numPeople; i++) {
    peopleCandies.push(0);
  }

  return peopleCandies;
}

function distributeCandies(candies, numPeople) {
  let peopleCandies = initPeopleCandies(numPeople);
  let numOfCandies = 1;
  let index = 0;

  while (candies) {
    let candiesToAssign = numOfCandies > candies ? candies : numOfCandies;
    peopleCandies[index] += candiesToAssign;
    candies -= candiesToAssign;
    numOfCandies++;
    index = (index + 1) % numPeople;
  }

  return peopleCandies;
}
