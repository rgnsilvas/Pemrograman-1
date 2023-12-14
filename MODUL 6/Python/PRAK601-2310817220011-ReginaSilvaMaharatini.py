baris, kolom = map(int, input().split())
angka=[]
num = 0
isi = list(map(int, input().split()))

for i in range (baris):
    angka.append(isi[num:num+kolom])
    num = num + kolom
for baris in angka:
    for isi in baris:
        print(isi, end=' ')
    print()