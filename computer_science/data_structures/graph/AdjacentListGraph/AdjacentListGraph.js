export function addNode(AdjacentListGraph, key) {
  AdjacentListGraph.set(key, []);
}

export function addEdge(AdjacentListGraph, origin, destination) {
  AdjacentListGraph.get(origin).push(destination);
  AdjacentListGraph.get(destination).push(origin);
}

export function bfs(AdjacentListGraph, vertex) {
  const visitedVertices = new Set();
  const queue = [vertex];

  while (queue.length) {
    const origin = queue.shift();
    const destinations = AdjacentListGraph.get(origin);

    for (let destination of destinations) {
      if (!visitedVertices.has(destination)) {
        visitedVertices.add(destination);
        queue.push(destination);
      }
    }
  }
}

export function dfs(AdjacentListGraph, vertex, visitedVertices = new Set()) {
  const destinations = AdjacentListGraph.get(vertex);
  visitedVertices.add(vertex);

  for (let destination of destinations) {
    if (!visitedVertices.has(destination)) {
      dfs(AdjacentListGraph, destination, visitedVertices);
    }
  }
}
