n = int(input("Nhap n: "))

dn = 0
t = n
while t != 0:
    dv = t % 10
    dn = dn * 10 + dv
    t = t // 10
    
print("Chu so dao nguoc", dn)

