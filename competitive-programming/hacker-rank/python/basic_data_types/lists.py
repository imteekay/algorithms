if __name__ == '__main__':
    N = int(raw_input())
    l = []

    for i in range(N):
        u_input = raw_input().split(' ')

        if u_input[0] == 'insert':
            l.insert(int(u_input[1]), int(u_input[2]))
        elif u_input[0] == 'remove':
            l.remove(int(u_input[1]))
        elif u_input[0] == 'append':
            l.append(int(u_input[1]))
        elif u_input[0] == 'sort':
            l.sort()
        elif u_input[0] == 'pop':
            l.pop()
        elif u_input[0] == 'reverse':
            l.reverse()
        else:
            print(l)
