n = int(input("Nhap n: "))

if (n % 4 == 0 and n % 100 != 0) or (n % 400 == 0):
    print("La nam nhuan")
else:
    print("Khong la nam nhuan")
