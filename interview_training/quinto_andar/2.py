A = [0,3,3,7,5,3,11,1]
tuple_a = [(index, el) for index, el in enumerate(A)]
sorted_tuple = sorted(tuple_a, key=lambda x: x[1])

dual = []

for index, el in enumerate(range(len(sorted_tuple) - 1)):
    result = (sorted_tuple[index], sorted_tuple[index+1])
    dual.append(result)

smaller_distance = 1000000000

for d in dual:
    indice1, indice2 = d[0][0], d[1][0]
    value1, value2 = d[0][1], d[1][1]

    if indice1 < indice2:
        if abs(value1 - value2) < smaller_distance:
            smaller_distance = abs(value1 - value2)
    else:
        if abs(value2 - value1) < smaller_distance:
            smaller_distance = abs(value2 - value1)

if smaller_distance == 1000000000:
    print(-1)
else:
    print(smaller_distance)
