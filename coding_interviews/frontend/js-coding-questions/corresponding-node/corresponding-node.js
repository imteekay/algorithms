function correspondingNode(tree1, tree2, node1) {
  if (tree1 === node1) {
    return tree2;
  }

  let children1 = [...tree1.children];
  let children2 = [...tree2.children];

  for (let index = 0; index < children1.length; index++) {
    let child1 = children1[index];
    let child2 = children2[index];
    let corresponding = correspondingNode(child1, child2, node1);

    if (corresponding) {
      return corresponding;
    }
  }

  return null;
}
