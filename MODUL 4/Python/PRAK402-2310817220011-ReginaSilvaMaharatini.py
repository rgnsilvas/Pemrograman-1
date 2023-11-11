bil = int(input("Input\n"))

for i in range(1, bil + 1):
    if i % 2 != 0:
        print(i, end=' ')

print()

for i in range(bil, 0, -1):
    if i % 2 == 0:
        print(i, end=' ')

print()


