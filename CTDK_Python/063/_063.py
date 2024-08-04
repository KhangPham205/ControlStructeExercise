n = int(input("Nhap n: "))

tich = 1;
t = n
while(t != 0):
    dv = t % 10
    if dv % 2 != 0:
        tich = tich * dv
    t = t // 10

print("Tich chu so le: ", tich)
