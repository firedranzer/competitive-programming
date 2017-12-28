if __name__ == '__main__':
    n = int(input())
    a = []
    for n in range(1, n+1):
        a.append(n)
    num_str = ''.join(map(str, a))
    print(num_str)
        