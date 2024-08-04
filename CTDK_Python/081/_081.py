x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 1
m = 1
i = 1
while(i <= n):
    m = m * (x + i)
    s = s + 1 /m
    i = i + 1

print("Tong la: ", s)
