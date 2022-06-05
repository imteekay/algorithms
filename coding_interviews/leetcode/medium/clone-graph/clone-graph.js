/*
Cloning a graph using a Breadth-First Search
— build a queue of all nodes in the graph
— build a hashmap of all cloned nodes
— if it's on the map: it's counted as visited & add to the neighbors' list 
— else create from scratch
*/

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
