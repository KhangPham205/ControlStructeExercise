n = int(input("Nhap n: "))

t = 1
i = 1
while(i <= n):
    t = t * (1 + 1 / (i * i))
    i = i + 1

print("Tong la: ", t)

