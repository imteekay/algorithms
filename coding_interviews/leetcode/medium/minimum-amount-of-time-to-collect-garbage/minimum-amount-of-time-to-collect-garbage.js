function measure(garbage, travel, garbageType) {
  let minutes = 0;
  let lastGarbageItem = -1;

  for (let [index, garbageItems] of garbage.entries()) {
    let itemCount = 0;

    for (let item of garbageItems) {
      if (item === garbageType) {
        lastGarbageItem = index;
        itemCount++;
      }
    }

    minutes += itemCount;
  }

  for (let index = 0; index < lastGarbageItem; index++) {
    minutes += travel[index];
  }

  return minutes;
}

function garbageCollection(garbage, travel) {
  let minutes = 0;
  minutes += measure(garbage, travel, 'G');
  minutes += measure(garbage, travel, 'M');
  minutes += measure(garbage, travel, 'P');
  return minutes;
}
