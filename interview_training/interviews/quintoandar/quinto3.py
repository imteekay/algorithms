T = [80, 80, 1000000000, 80, 80, 80, 80, 80, 80, 123456789]

number_of_shares = int(len(T) / 2)
number_of_different_types = len(set(T))

if number_of_different_types < number_of_shares:
    return number_of_different_types
else:
    return number_of_shares
