class Vertex:
    def __init__(self, key):
        self.key = key
        self.connected_to = {}

    def add_neighbor(self, neighbor, weight):
        self.connected_to[neighbor] = weight

class Graph:
    def __init__(self):
        self.vertices_list = {}
        self.number_of_vertices = 0

    def add_vertex(self, key):
        self.vertices_list[key] = Vertex(key)
        self.number_of_vertices += 1
