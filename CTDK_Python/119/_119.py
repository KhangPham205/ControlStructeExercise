n = int(input("Nhap n: "))
if (n == 1):
    ahh = 2
else:
    at = 2
    i = 2

    while (i <= n):
        ahh = (at * at + 2) / (2 * at)
        i += 1
        at = ahh

print("Ket qua:", ahh)