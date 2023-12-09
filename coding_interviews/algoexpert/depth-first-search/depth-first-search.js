class Node {
  constructor(name) {
    this.name = name;
    this.children = [];
  }

  addChild(name) {
    this.children.push(new Node(name));
    return this;
  }

  depthFirstSearch(array) {
    let queue = [this];

    while (queue.length) {
      let node = queue.shift();
      array.push(node.name);

      for (let child of node.children) {
        child.depthFirstSearch(array);
      }
    }

    return array;
  }
}
