n = int(input("Nhap n: "))

dn = 0
t = n
while t != 0:
    dv = t % 10
    dn = dn * 10 + dv
    t = t // 10

if dn == n:
    print("So doi xung")
else:
    print("Khong la so doi xung")

