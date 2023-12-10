def reverse(revers):
    i = 0
    while revers != 0:
        i = (10 * i) + revers % 10
        revers //= 10
    return i

for i in range(3):
    A, B = input().split()
    A = reverse(int(A))
    B = reverse(int(B))
    hasil = A + B
    print(f'{reverse(hasil)}\n')