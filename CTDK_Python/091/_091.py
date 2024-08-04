x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = -1
t = 1
m = 1
dau = 1
i = 2
while(i <= 2 * n):
    t = t * x * x
    m = m * i * (i - 1)
    s = s + dau * t / m
    i = i + 2
    dau = -dau

print("Tong la: ", s)
