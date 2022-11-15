function buildCounter(sentence) {
  let counter = new Map();

  for (let word of sentence) {
    if (counter.has(word)) counter.set(word, counter.get(word) + 1);
    else counter.set(word, 1);
  }

  return counter;
}

function getOnceWords(counter) {
  const onceWords = [];

  for (let [word, count] of counter) {
    if (count === 1) onceWords.push(word);
  }

  return onceWords;
}

function getUncommonWords(onceWords, map) {
  return onceWords.filter((onceWord) => !map.has(onceWord));
}

function uncommonFromSentences(s1, s2) {
  const list1 = s1.split(' ');
  const list2 = s2.split(' ');
  const counter1 = buildCounter(list1);
  const counter2 = buildCounter(list2);
  const onceWords1 = getOnceWords(counter1);
  const onceWords2 = getOnceWords(counter2);

  return [
    ...getUncommonWords(onceWords1, counter2),
    ...getUncommonWords(onceWords2, counter1),
  ];
}
