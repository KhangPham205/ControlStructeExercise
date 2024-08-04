n = int(input("Nhap n: "))

s = 0
m = 0
i = 1
while(i <= n):
    m = m + i
    s = s + 1 / m
    i = i + 1

print("Tong la: ", s)
