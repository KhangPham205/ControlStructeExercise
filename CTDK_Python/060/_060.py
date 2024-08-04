n = int(input("Nhap n: "))

tich = 1;
t = n
while(t != 0):
    dv = t % 10
    tich = tich * dv
    t = t // 10

print("Tich cac chu so: ", tich)
