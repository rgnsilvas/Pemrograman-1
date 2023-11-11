while True:
    print("Pilih Program\n 1.Penjumlahan\n 2.Pengurangan\n 3.Perkalian\n 4.Pembagian\n 5.Exit")
    a=int(input("Masukkan Pilihan ="))
    if a > 5:
        print("Input anda salah, silahkan coba lagi")
        continue
    elif a==5:
        print("Terima kasih, telah menggunakan kalkulator Regina Silva Maharatini")
        break
    else:
        b=float(input("Masukkan Nilai Pertama ="))
        c=float(input("Masukkan Nilai Kedua   ="))
        if a==1:
            print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f"% (b,c, b+c))
        elif a==2:
            print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f"% (b,c, b-c))
        elif a==3:
            print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f"% (b,c, b*c))
        elif a==4:
            print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f"% (b,c, b/c))