x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
t = 1
m = 1
dau = -1
i = 1
while(i <= n):
    t = t * x
    m = m * i
    s = s + dau * t / m
    i = i + 1
    dau = -dau

print("Tong la: ", s)
