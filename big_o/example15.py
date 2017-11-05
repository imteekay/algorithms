def all_fib(n):
    memo = []
    memo.append(0)
    memo.append(1)

    for i in range(n):
        print("%d: %d" %(i, fib(i, memo)))

def fib(n, memo):
    if n <= len(memo) - 1:
        return memo[n]

    memo.append(fib(n - 1, memo) + fib(n - 2, memo))
    return memo[n]

all_fib(7)

# Complexity: O(N)
# All previous actions are already computed
