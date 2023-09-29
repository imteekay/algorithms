// https://bigfrontend.dev/problem/Traverse-DOM-level-by-level

export function flatten(root) {
  if (!root) return [];

  let result = [];
  let queue = [root];

  while (queue.length > 0) {
    let node = queue.shift();
    result.push(node);

    for (let child of node.children) {
      queue.push(child);
    }
  }

  return result;
}
