load "./node.rb"

class LinkedList

  attr_accessor :head, :tail

  def initialize
    @head = nil
    @tail = nil
  end

  def purge
  	@head = nil
  	@tail = nil
  end

  def empty?
  	@head.nil?
  end

  

end
