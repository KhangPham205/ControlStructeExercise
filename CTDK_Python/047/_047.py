from math import sqrt


n = int(input("Nhap n: "))

s = 0
i = 1
while(i <= n):
    s = s + sqrt(1 + 1 / (i * i) + 1 / (i + 1)**2)
    i = i + 1

print("Tong la: ", s)
