load "./node.rb"

class LinkedList

  attr_accessor :head

  def initialize
    @head = nil  
  end

  def purge
  	@head = nil
  end

  def empty?
  	@head.nil?
  end

  def preppend data
  	node = Node.new(data)
  	node.next = @head
  	@head = node
  end

  def append data
  	node = Node.new(data)
  	current_node = @head

  	if empty?
  		@head = node
  	else
  		while current_node.next != nil
  			current_node = current_node.next
  		end

  		current_node.next = node
  	end
  end

end
