let queue = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function push(queue, value) {
  queue.push(value);
}

function pop(queue) {
  return queue.shift();
}

function front(queue) {
  return queue[0];
}

function isEmpty(queue) {
  return queue.length === 0;
}

console.log(queue); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

push(queue, 0);
console.log(queue); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0]

pop(queue); // 1
console.log(queue); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

front(queue); // 2
isEmpty(queue); // false

while (!isEmpty(queue)) {
  queue.pop();
}

isEmpty(queue); // true
console.log(queue);
