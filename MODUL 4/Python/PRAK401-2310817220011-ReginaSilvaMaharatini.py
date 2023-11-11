bil, sim = input().split()
bil = int(bil)

for i in range(1, 51):
    if i % bil == 0:
        print(sim, end=' ')
    else:
        print(i, end=' ')
