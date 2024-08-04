n = int(input("Nhap n: "))
if (n == 0):
    ahh = -1
elif (n == 1):
    ahh = 3
else:
    att = -1
    at = 3
    i = 2

    while (i <= n):
        ahh = 5 * at + 6 * att
        i += 1
        att = at
        at = ahh

print("Ket qua:", ahh)
