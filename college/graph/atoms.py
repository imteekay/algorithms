import networkx as nx
import matplotlib.pyplot as plt

def plot_graph(graph, pos, title):
    plt.figure(figsize=(6, 6))
    nx.draw(graph, pos, with_labels=True, node_color='lightblue', node_size=2000, font_size=12, font_weight='bold', edge_color='gray')
    plt.title(title)
    plt.show()


# H₂O
# Adiciona vértices e conectas os átomos com arestas
# Define as posições de cada átomo
# Plota o grafo de água
water = nx.Graph()
water.add_nodes_from(['O', 'H1', 'H2'])
water.add_edges_from([('O', 'H1'), ('O', 'H2')])
water_pos = {'O': (0, 0), 'H1': (-1, -1), 'H2': (1, -1)}
plot_graph(water, water_pos, '(H2O)')

# CO₂
# Adiciona vértices e conectas os átomos com arestas
# Define as posições de cada átomo
# Plota o grafo de CO₂
co2 = nx.Graph()
co2.add_nodes_from(['C', 'O1', 'O2'])
co2.add_edges_from([('C', 'O1'), ('C', 'O2')])
co2_pos = {'C': (0, 0), 'O1': (-1, 0), 'O2': (1, 0)}
plot_graph(co2, co2_pos, '(CO2)')