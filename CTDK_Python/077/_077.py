k = float(input("Nhap k: "))
n = int(input("Nhap n: "))

s = 0
i = 1
while(i <= n):
    s = s + i**k
    i = i + 1

print("Tong la: ", s)

