x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
i = 1
while(i <= n):
    s = (i + s)**(1 / (i + 1))
    i = i + 1

print("Tong can la: ", s)


