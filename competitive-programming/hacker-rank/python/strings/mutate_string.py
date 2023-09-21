# https://www.hackerrank.com/challenges/python-mutations/problem

# abracadabra
# 5 k
# abrackdabra

def mutate_string(string, position, character):
    mutated_string = ''

    for i in range(len(string)):
        if i == position:
            mutated_string += character
        else:
            mutated_string += string[i]

    return mutated_string

print(mutate_string('abracadabra', 5, 'k'))
