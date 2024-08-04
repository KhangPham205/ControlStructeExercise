x = float(input("Nhap x: "))
n = int(input("Nhap n: "))

s = 0
t = 1
i = 1
while(i <= n):
    t = t * i
    s = (t + s)**(1 / (i + 1))
    i = i + 1

print("Tong can la: ", s)