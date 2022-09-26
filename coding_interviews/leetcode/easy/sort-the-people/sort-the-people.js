function sortPeople(names, heights) {
  const heightToName = new Map();

  for (let index = 0; index < names.length; index++) {
    const name = names[index];
    const height = heights[index];
    heightToName.set(height, name);
  }

  return heights
    .sort((height1, height2) => height2 - height1)
    .map((height) => heightToName.get(height));
}
