n = int(input("Nhap n: "))

if (n == 1):
    ahh = 1
    bhh = 1
else:
    at = 1
    bt = 1
    i = 2

    while (i <= n):
        ahh = 3 * bt + 2 * at
        bhh = at + 3 * at
        i += 1
        at = ahh
        bt = bhh
        
print("Ket qua:", ahh, ' ', bhh)