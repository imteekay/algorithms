from graph import *

graph = Graph()

for i in range(6):
    graph.add_vertex(i)

print(graph.vertices_list)
print(graph.number_of_vertices)

graph.vertices_list[0].add_neighbor(graph.vertices_list[1], 5)
graph.vertices_list[0].add_neighbor(graph.vertices_list[5], 2)
graph.vertices_list[1].add_neighbor(graph.vertices_list[2], 4)
graph.vertices_list[2].add_neighbor(graph.vertices_list[3], 9)
graph.vertices_list[3].add_neighbor(graph.vertices_list[4], 7)
graph.vertices_list[3].add_neighbor(graph.vertices_list[5], 3)
graph.vertices_list[4].add_neighbor(graph.vertices_list[0], 1)
graph.vertices_list[5].add_neighbor(graph.vertices_list[4], 8)
graph.vertices_list[5].add_neighbor(graph.vertices_list[2], 1)

for vertex in graph.vertices_list.values():
    for neighbor in vertex.connected_to.keys():
        print("(%s %s)" %(vertex.key, neighbor.key))
