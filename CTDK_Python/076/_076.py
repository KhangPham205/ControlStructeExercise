x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 1 + x
t = x
m = 1
i = 3
while(i <= 2 * n + 1):
    t = t * x * x
    m = m * i * (i - 1)
    s = s + t / m
    i = i + 2

print("Tong la: ", s)


