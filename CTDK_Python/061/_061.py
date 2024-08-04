n = int(input("Nhap n: "))

dem = 0;
t = n
while(t != 0):
    dv = t % 10
    if dv % 2 != 0:
        dem = dem + 1
    t = t // 10

print("So luong cac chu so le: ", s)
