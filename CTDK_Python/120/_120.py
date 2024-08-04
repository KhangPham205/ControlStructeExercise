from math import sqrt


n = int(input("Nhap n: "))
if (n == 1):
    ahh = 2
else:
    at = 2
    i = 2

    while (i <= n):
        ahh = 5 * at + sqrt(24 * at * at - 8)
        i += 1
        at = ahh

print("Ket qua:", ahh)
