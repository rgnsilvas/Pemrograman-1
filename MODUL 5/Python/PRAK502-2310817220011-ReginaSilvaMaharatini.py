def hitung(nilai1, nilai2):
    hasil = nilai1 - nilai2
    if hasil < 0:
        return -hasil
    else:
        return hasil

def mutlak(angka):
    if angka < 0:
        return -angka
    else:
        return angka
    
for i in range(3):
    a, c, b, d = map(int, input().split())
    hasil = hitung(a, b) + hitung(c, d)
    
    print(mutlak(hasil))
    print ("\n")