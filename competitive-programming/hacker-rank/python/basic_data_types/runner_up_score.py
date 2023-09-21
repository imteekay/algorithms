# [1,6,3,6,5,4]
# [1,-1]
# [6, 1]
# [6, 3]
# [6, 3]
# [6, 5]
# [6, 5]

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())

    maximum = -999999999999999999999
    runner_up = -999999999999999999999

    for el in arr:
        if el > maximum:
            runner_up = maximum
            maximum = el
        elif el < maximum and el > runner_up:
            runner_up = el

    print(runner_up)
