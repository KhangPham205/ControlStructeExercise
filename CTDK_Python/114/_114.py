n = int(input("Nhap n: "))
if (n == 1):
    ahh = -2
else:
    at = -2
    i = 2

    while (i <= n):
        ahh = 5 * at + 2 * 3**i - 6 * 7**i + 12
        i += 1
        at = ahh

print("Ket qua:", ahh)