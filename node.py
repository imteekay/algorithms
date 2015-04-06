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

class LinkedList:

	def __init__(self):
		self.head = None

	def is_empty(self):
		return self.head == None

	def add(self, data):
		node = Node(data)
		node.set_next(self.head)
		self.head = node

	def size(self):
		count = 0
		current = self.head

		while current != None:
			count += 1
			current = current.get_next

		return count

	def search(self, data):
		current = self.head
		found = False

		while current != None and not found:
			if current.get_data() == data:
				found = True
			else:
				current = current.get_next()

		return found

	def remove(self, data):
		current = self.head
		previous = None
		found = False

		while not found:
			if current.get_data() == item:
				found = True
      else:
				previous = current
				current = current.get_next()

    if previous == None:
			self.head = current.get_next()
    else:
			previous.set_next(current.get_next())