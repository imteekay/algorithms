def mini_max_sum(arr):
    sorted_arr = sorted(arr)
    print sum(sorted_arr[0:4]), sum(sorted_arr[1:5])

if __name__ == "__main__":
    arr = map(int, raw_input().strip().split(' '))
    mini_max_sum(arr)
