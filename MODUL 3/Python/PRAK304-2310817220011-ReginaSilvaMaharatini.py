num = int(input("Input\n"))

if num == 0:
    print("Nol")
elif 1 <= num <= 9:
    print("Satuan")
elif 10 <= num <= 19:
    print("Belasan")
elif 20 <= num <= 99:
    print("Puluhan")
elif num >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
