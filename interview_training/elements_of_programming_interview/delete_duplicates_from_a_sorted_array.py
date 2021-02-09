# input: [2,3,5,5,7,11,11,11,13]
# output: [2,3,5,7,11,13,0,0,0]

# input: [-2,-2,1]
# output: [-2,1,0]

# input: [0,0,1,1]
# output: [0,1,0,0]

'''
result = []
counter = {}

loop input
    is not in the counter
        counter[number] << True
        result << number
    
n = len(input) - len(result)

loop n
    result << 0

return result

Space: O(2N) = O(N)
Runtime: O(N)
'''

def delete_duplicates(numbers):
    if not numbers:
        return [[], 0]

    result = []
    counter_mapper = {}
    counter = 0

    for number in numbers:
        if number not in counter_mapper:
            counter_mapper[number] = True
            result.append(number)
            counter += 1

    difference_of_lengths = len(numbers) - len(result)

    for _ in range(difference_of_lengths):
        result.append(0)

    return [result, counter]

def test(input, expect):
    print(delete_duplicates(input) == expect)

test([2,3,5,5,7,11,11,11,13], [[2,3,5,7,11,13,0,0,0],6])
test([-2,-2,1], [[-2,1,0],2])
test([0,0,1,1], [[0,1,0,0],2])
test([], [[],0])

def delete_duplicates_2(numbers):
    counter = 1

    if not numbers:
        return [[], 0]

    for index in range(1, len(numbers)):
        if numbers[index - 1] != numbers[index]:
            numbers[counter] = numbers[index]
            counter += 1

    difference_of_lengths = len(numbers) - counter

    for index in range(difference_of_lengths):
        numbers[len(numbers) - index - 1] = 0

    return [numbers, counter]

def test_2(input, expect):
    print(delete_duplicates(input) == expect)

test_2([2,3,5,5,7,11,11,11,13], [[2,3,5,7,11,13,0,0,0],6])
test_2([-2,-2,1], [[-2,1,0],2])
test_2([0,0,1,1], [[0,1,0,0],2])
test_2([], [[],0])
