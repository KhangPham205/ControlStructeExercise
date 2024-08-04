n = int(input("Nhap n: "))
if (n == 1):
    ahh = 2
else:
    at = 2
    i = 2

    while (i <= n):
        ahh = (-9 * at - 24) / (5 * at + 13)
        i += 1
        at = ahh

print("Ket qua:", ahh)
