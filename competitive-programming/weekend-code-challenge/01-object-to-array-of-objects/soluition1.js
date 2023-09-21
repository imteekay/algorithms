const ingredients = { lettuce: 0, bacon: 0, cheese: 1, meat: 4 };

const output = Object.entries(ingredients).map(([name, count]) => ({
  name,
  count,
}));
