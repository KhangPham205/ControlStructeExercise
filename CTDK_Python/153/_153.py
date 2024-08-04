n = int(input("Nhap n: "))

flag = 1
t = n

while t > 1:
    du = t % 5
    if (du != 0):
        flag = 0
    t = t // 5

if flag == 1:
    print("Co dang 5^m")
else:
    print("Khong co dang 5^m")