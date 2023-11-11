n1, n2 = map(int, input().split())
hasil, result = 0, 0

for i in range(n1):
    for j in range(i, -1, -1):
        print('({} * {})'.format(j + 1, n2), end='')
        if j > 0:
            print(' + ', end='')
    hasil += (i + 1) * n2
    print(' =', hasil)
    result += hasil
print(result)
