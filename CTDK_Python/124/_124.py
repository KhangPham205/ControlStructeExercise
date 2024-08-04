n = int(input("Nhap n: "))

if (n == 1):
    ahh = 2
    bhh = 1
else:
    at = 2
    bt = 1
    i = 2

    while (i <= n):
        ahh = 2 * bt * bt + at * at
        bhh = 2 * at * bt
        i += 1
        at = ahh
        bt = bhh
        
print("Ket qua:", ahh, ' ', bhh)