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

end
