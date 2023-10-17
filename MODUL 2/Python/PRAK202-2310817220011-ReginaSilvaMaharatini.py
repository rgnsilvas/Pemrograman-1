nilai1 = float(input("Input\nMasukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua   : "))

hasil = nilai1 + nilai2

output1 = (f"{int(nilai1)}" if nilai1.is_integer() else f"{nilai1:.2f}")

print("\nOutput")
print(f'Hasil dari penjumlahan nilai pertama "{output1}" dan nilai kedua "{nilai2}" adalah "{hasil:.2f}"')