def bubble_sort(ar):
    for el1 in ar:
        for el2 in ar:
            if el1 > el2:
                print el1
                print el2
                el1, el2 = el2, el1

    return ar
