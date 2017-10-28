def permutation(str):
    handle_permutation(str, "")

def handle_permutation(str, prefix):
    if len(str) == 0:
        print(prefix)
    else:
        for i in range(len(str)):
            rem = str[0:i] + str[i+1:]
            handle_permutation(rem, prefix + str[i])

permutation('abc')
