class Graph:
    def __init__(self):
        self.vertices = []

    def add_vertex(self, key):
        if self.contains(self.vertices, key):
            print("Vertex", key, "not added because it is an existing key")
        else:
            self.vertices.append(Vertex(key))

    def print(self):
        for vertex in self.vertices:
            print("Vertex", vertex.key)
            for neighbor in vertex.adjacent:
                print(neighbor.key)

    def add_edge(self, from_key, to_key):
        from_vertex = self.get_vertex(from_key)
        to_vertex = self.get_vertex(to_key)

        if from_vertex is None or to_vertex is None:
            print("Invalid edge (", from_key, "-->", to_key, ")")
            return
        
        if self.contains(from_vertex.adjacent, to_key):
            print("Edge", to_key, "not added because it is already an existing neighbor")
            return

        from_vertex.adjacent.append(to_vertex)

    def get_vertex(self, key):
        for vertex in self.vertices:
            if vertex.key == key:
                return vertex

    def contains(self, vertices, key):
        for vertex in vertices:
            if vertex.key == key:
                return True

        return False

class Vertex:
    def __init__(self, key):
        self.key = key
        self.adjacent = []
