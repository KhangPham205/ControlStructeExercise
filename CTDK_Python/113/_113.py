n = int(input("Nhap n: "))
if (n == 1):
    ahh = 2
else:
    at = 2
    i = 2

    while (i <= n):
        ahh = at + 2 * i + 1
        i += 1
        at = ahh

print("Ket qua:", ahh)