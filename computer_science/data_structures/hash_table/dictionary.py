d1 = {}
d2 = dict()
d3 = { 'something': 10, 'other_thing': 11 }

print(d3['something'])

d1[1] = 1
d1[2] = 2
d1[3] = 3
d1[4] = 4

for key, value in d1.items():
    print('key: %d | value: %d' %(key, value))

d1[2] = -2
print(d1[2])
