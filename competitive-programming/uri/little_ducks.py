# https://www.urionlinejudge.com.br/judge/en/problems/view/2334

n = int(raw_input())

while n != -1:
    if n == 0:
        print(0)
    else:
        print(n - 1)

    n = int(raw_input())
