function addConnection(nodeToConnectionsCount, node) {
  if (nodeToConnectionsCount[node]) {
    nodeToConnectionsCount[node]++;
  } else {
    nodeToConnectionsCount[node] = 1;
  }
}

function findCenter(edges) {
  let nodeToConnectionsCount = {};

  for (let [first, second] of edges) {
    addConnection(nodeToConnectionsCount, first);
    addConnection(nodeToConnectionsCount, second);
  }

  let star;
  let maxConnections = -Infinity;

  Object.entries(nodeToConnectionsCount).forEach(([node, count]) => {
    if (count > maxConnections) {
      star = node;
      maxConnections = count;
    }
  });

  return star;
}
