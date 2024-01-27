const dom1 = document.createElement('div');
dom1.innerHTML = `
  <main>
    <h1>Heading</h1>
    <div>
      <h2>test1</h2>
      <p>test2 <em>emphasis</em></p>
    </div>
  </main>
`;

const dom2 = document.createElement('main');
dom2.innerHTML = `
  <article>
    <h1>Heading2</h1>
    <section>
      <img src="img.png" alt="image" />
      <h3>test5 <strong>strong</strong></h3>
    </section>
  </article>
`;

correspondingNode(dom1, dom2, dom1); // dom2
correspondingNode(dom1, dom2, dom1.querySelector('h2')); // <img src="img.png" alt="image" />
correspondingNode(dom1, dom2, dom1.querySelector('em')); // <strong>strong</strong>
