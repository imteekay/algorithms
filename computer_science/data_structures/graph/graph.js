class Vertex {
  constructor(key) {
    this.key = key;
    this.adjacent = [];
  }

  contains(key) {
    for (let vertex of this.adjacent) {
      if (vertex.key === key) {
        return true;
      }
    }

    return false;
  }
}

class Graph {
  constructor() {
    this.vertices = [];
  }

  addVertex(key) {
    if (this.contains(key)) {
      console.log(`Vertex ${key} not added because it's an existent key`);
      return;
    }

    this.vertices.push(new Vertex(key));
  }

  contains(key) {
    for (let vertex of this.vertices) {
      if (vertex.key === key) {
        return true;
      }
    }

    return false;
  }

  addEdge(from, to) {
    let fromVertex = this.getVertex(from);
    let toVertex = this.getVertex(to);

    if (!fromVertex) {
      console.log(`Vertex ${from} doesn't exist in the graph`);
      return;
    }

    if (!toVertex) {
      console.log(`Vertex ${to} doesn't exist in the graph`);
      return;
    }

    if (fromVertex.contains(to)) {
      console.log(`Existing edge: ${from} --> ${to}`);
      return;
    }

    fromVertex.adjacent.push(toVertex);
  }

  getVertex(key) {
    for (let vertex of this.vertices) {
      if (vertex.key === key) {
        return vertex;
      }
    }
  }

  print() {
    for (let vertex of this.vertices) {
      let adjacent = vertex.adjacent.reduce(
        (verticesString, vertex) => `${verticesString} ${vertex.key}`,
        ''
      );
      console.log(`Vertice ${vertex.key}: ${adjacent}`);
    }
  }
}

const graph = new Graph();

graph.addVertex(0);

for (let i = 1; i <= 4; i++) {
  graph.addVertex(i);
}

graph.addVertex(0);
graph.addVertex(0);

graph.addEdge(1, 2);
graph.addEdge(1, 3);
graph.addEdge(2, 3);
graph.addEdge(2, 4);
graph.addEdge(1, 2);
graph.addEdge(6, 2);
graph.addEdge(3, 2);
graph.addEdge(1, 1);

console.log();
graph.print();
