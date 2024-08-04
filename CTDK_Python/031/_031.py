n = int(input("Nhap n: "))

s = 0
i = 1
while(i <= 2 * n + 1):
    s = s + 1 / i
    i = i + 2

print("Tong la: ", s)