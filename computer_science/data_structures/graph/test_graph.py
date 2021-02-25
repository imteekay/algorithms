from graph import *

g = Graph()

for i in range(5):
    g.add_vertex(i)

g.add_edge(1, 2)
g.add_edge(1, 3)
g.add_edge(2, 3)
g.add_edge(2, 4)
g.add_edge(1, 2)
g.add_edge(6, 2)
g.add_edge(3, 2)
g.add_edge(1, 1)
g.print()
