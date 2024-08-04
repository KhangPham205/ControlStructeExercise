n = int(input("Nhap n: "))

s = 0
i = 1
while(i <= n):
    s = s + i / (i + 1)
    i = i + 1

print("Tong la: ", s)