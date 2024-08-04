n = int(input("Nhap n: "))

s = 0;
t = n
while(t != 0):
    dv = t % 10
    s = s + dv
    t = t // 10

print("Tong cac chu so: ", s)
