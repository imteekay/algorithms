def get_bit(number):
    return "{0:b}".format(number)

def hammingDistance(x, y):
    x_bit = get_bit(x)
    y_bit = get_bit(y)
    
    min_len = min(len(x_bit), len(y_bit))
    max_len = max(len(x_bit), len(y_bit))
    diff_len = max_len - min_len
    
    if len(x_bit) > len(y_bit):
        max_bit = x_bit
        min_bit = y_bit
    else:
        max_bit = y_bit
        min_bit = x_bit
        
    min_bit = '0' * diff_len + min_bit
    
    counter = 0
    
    for index in range(max_len):
        if max_bit[index] != min_bit[index]: counter += 1
            
    return counter