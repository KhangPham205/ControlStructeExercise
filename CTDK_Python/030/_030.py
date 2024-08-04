n = int(input("Nhap n: "))

s = 0
i = 2
while(i <= 2 * n):
    s = s + 1 / i
    i = i + 2

print("Tong la: ", s)