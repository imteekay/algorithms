# https://www.hackerrank.com/challenges/py-introduction-to-sets/problem

def average(array):
    return sum(list(set(array))) / float(len(set(array)))
