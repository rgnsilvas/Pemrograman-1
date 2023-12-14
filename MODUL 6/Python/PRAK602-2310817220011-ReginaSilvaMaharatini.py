ruangan = int(input())
hasil = []
zet = list(map(int, input().split()))
for i in range (ruangan):
          print((i+1)*zet[i], end= ' ')