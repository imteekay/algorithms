# https://www.hackerrank.com/challenges/nested-list/problem

marksheet = [[raw_input(), float(raw_input())] for _ in range(int(raw_input()))]
second_lowest = sorted(list(set([score for name, score in marksheet])))[1]
names = sorted([name for name, score in marksheet if score == second_lowest])

for name in names:
    print name
