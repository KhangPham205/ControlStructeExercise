x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
m = 0
dau = 1
i = 1
while(i <= n):
    m = m + i
    s = s + dau / m
    i = i + 1
    dau = -dau

print("Tong la: ", s)



