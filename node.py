class Node:

	def __init__(self, initial_data):
		self.data = initial_data
		self.next = None

	def get_data(self):
		return self.data

	def set_data(self, new_data):
		self.data = new_data

	def get_next(self):
		return self.next

	def set_next(self, new_next):
		self.next = new_next

node = Node(10)
print node.get_data()