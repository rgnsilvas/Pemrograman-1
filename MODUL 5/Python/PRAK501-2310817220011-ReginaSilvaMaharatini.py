def max_bilangan(a,b,c,d):
    if a > b and a > c and a > d:
        return a
    elif b > a and b > c and b > d:
        return b
    elif c > a and c > b and c > d:
        return c
    else:
        return d
    
for i in range(3):
    a, b, c, d = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)
    print(f'{max_bilangan(a, b, c, d)}\n')