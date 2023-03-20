function pickGifts(gifts, k) {
  while (k--) {
    let maxIndex = -Infinity;
    let max = -Infinity;

    for (let index = 0; index < gifts.length; index++) {
      if (gifts[index] > max) {
        maxIndex = index;
        max = gifts[index];
      }
    }

    gifts[maxIndex] = Math.floor(Math.sqrt(gifts[maxIndex]));
  }

  return gifts.reduce((sum, gift) => sum + gift, 0);
}
