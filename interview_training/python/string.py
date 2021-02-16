# length of a string
len('a string') # 8

# concatenate strings
s1 = 'string 1'
s2 = 'string 2'
s3 = s1 + s2 # 'string 1string 2'

# indexing
s1 = 'string 1'
s1[3] # 'i'

# slicing
s1 = 'string 1'
s1[:3] # 'str'
s1[2:] # 'ring 1'

# striping a string
s = '  a string   '
s.strip() # 'a string'

# string in string
s1 = 'string 1'
s2 = 'string'
s3 = 'other'
s2 in s1 # True
s3 in s1 # False
