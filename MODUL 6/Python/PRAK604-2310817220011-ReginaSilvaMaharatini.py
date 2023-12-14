asli = input()
palsu = input()
kode = len(asli)
pesan = len(palsu)
a = 0
b = 0
if len(asli) != len(palsu):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(asli)):
        if asli[i] == palsu[i]:
            print("*", end='')
            a+=1
        else:
            print("#", end='') 
            b+=1
    print("* = {}" .format(a))
    print("# = {}" .format(b))
    if a >= b:
        print("Pesan Asli")
    elif a < b:
        print("Pesan Palsu")