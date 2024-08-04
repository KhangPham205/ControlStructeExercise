n = int(input("Nhap n: "))

if (n == 0):
    ahh = 1
elif (n == 1):
    ahh = 1
else:
    att = 1
    at = 1
    i = 2

    while (i <= n):
        ahh = at + att
        i += 1
        att = at
        at = ahh

print("Ket qua:", ahh)

