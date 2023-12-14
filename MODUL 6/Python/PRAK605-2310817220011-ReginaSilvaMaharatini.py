n = int(input())
mtrA = []
print("Matriks A")
for i in range (n):
    k = list(map(int, input().split()))
    mtrA.append(k)
mtrB = []
print("Matriks B")
for i in range (n):
    k = list(map(int, input().split()))
    mtrB.append(k)
mtrAxB = []
print("Matriks AXB")
for i in range (n):
    mtrAxB.append([])
    for j in range (n):
        x = 0
        for k in range (n):
            x = x + mtrA[i][k] * mtrB[k][j]
        mtrAxB[i].append(x)
for baris in mtrAxB:
    for k in baris:
        print(k, end=' ')
    print()