print("Input")

angka = input().split()
phi = 3.142857

if len(angka) == 1:
    jari = float(angka[0])
    tinggi = float(input())
elif len(angka) == 2:
    jari, tinggi = map(float, angka)

volume = jari**2 * phi * tinggi
luas = 2 * ((phi * jari) * (jari + tinggi))
keliling = 2 * phi * jari

print("\nOutput")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")