x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = x
t = x
dau = -1
i = 3
while(i <= 2 * n + 1):
    t = t * x * x
    s = s + dau * t
    i = i + 2
    dau = -dau

print("Tong la: ", s)



