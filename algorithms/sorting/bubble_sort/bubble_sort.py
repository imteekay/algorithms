def bubble_sort(ar):
    for i in range(len(ar)):
        for k in range(i, len(ar)-1):
            if ar[k] > ar[k+1]:
                ar[k], ar[k+1] = ar[k+1], ar[k]
