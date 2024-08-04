from math import sqrt


n = int(input("Nhap n: "))

s = 0
t = 1
i = 1
while(i <= n):
    t = t * i
    s = sqrt(t + s)
    i = i + 1

print("Tong can la: ", s)
