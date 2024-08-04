from math import sin


x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
t = 1
i = 1
while(i <= n):
    t = t * sin(x)
    s = s + t
    i = i + 1

print("Tong la: ", s)
