num = int(input("Input\n"))
print("\nOutput")

hari = num // 86400
sisa1 = num % 86400
jam = sisa1 // 3600
sisa2 = sisa1 % 3600
menit = sisa2 // 60
detik = sisa2 % 60

if 0 <= num < 60:
    print(f"00:00:{detik:02d}")
elif 60 <= num <= 3599:
    print(f"00:{menit:02d}:{detik:02d}")
elif 3600 <= num <= 86399:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
