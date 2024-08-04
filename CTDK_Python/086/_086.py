x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
t = 1
dau = -1
i = 2
while(i <= 2 * n):
    t = t * x * x
    s = s + dau * t
    i = i + 2
    dau = -dau

print("Tong la: ", s)




