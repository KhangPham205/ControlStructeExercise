x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
t = 1
i = 2
while(i <= 2 * n):
    t = t * x * x
    s = s + t
    i = i + 2

print("Tong la: ", s)
