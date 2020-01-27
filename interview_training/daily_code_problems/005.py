'''
cons(a, b) constructs a pair, and car(pair) and cdr(pair)
returns the first and last element of that pair.

For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

Given this implementation of cons:

def cons(a, b):
    def pair(f):
        return f(a, b)

    return pair

Implement car and cdr.
'''


def cons(a, b):
    def pair(f):
        return f(a, b)

    return pair


def list_pair(a, b):
    return [a, b]


def car(pair):
    [a, _] = pair(list_pair)
    return a


def cdr(pair):
    [_, b] = pair(list_pair)
    return b


a = 1
b = 2

result = car(cons(a, b))
print(result)

result = cdr(cons(a, b))
print(result)
