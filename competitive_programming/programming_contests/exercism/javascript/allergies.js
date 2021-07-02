export class Allergies {
  constructor(score) {
    this.score = score;
    this.scores = [128, 64, 32, 16, 8, 4, 2, 1];
    this.scoreToFoodMapper = {
      1: 'eggs',
      2: 'peanuts',
      4: 'shellfish',
      8: 'strawberries',
      16: 'tomatoes',
      32: 'chocolate',
      64: 'pollen',
      128: 'cats',
    };
  }

  list() {
    this.listOfFoods = [];
    this.findMaxSmallerThanScore(this.score);
    return [...new Set(this.listOfFoods)];
  }

  findMaxSmallerThanScore(score) {
    if (score === 0) return;

    const maxSmallerThanScore = this.scores.find(
      (currentScore) => currentScore <= score
    );

    this.listOfFoods.unshift(this.scoreToFoodMapper[maxSmallerThanScore]);
    score -= maxSmallerThanScore;
    return this.findMaxSmallerThanScore(score);
  }

  allergicTo(food) {
    return this.list().includes(food);
  }
}
