function cloneGraph(node) {
  if (!node) return;

  let clonedGraph = new Node(node.val);
  let queue = [node];
  let createdNodes = {
    1: clonedGraph,
  };

  while (queue.length) {
    let currentNode = queue.shift();
    let clonedNode = createdNodes[currentNode.val];

    for (let neighbor of currentNode.neighbors) {
      if (createdNodes[neighbor.val]) {
        clonedNode.neighbors.push(createdNodes[neighbor.val]);
      } else {
        let createdNode = new Node(neighbor.val);
        createdNodes[neighbor.val] = createdNode;
        clonedNode.neighbors.push(createdNode);
        queue.push(neighbor);
      }
    }
  }

  return clonedGraph;
}
