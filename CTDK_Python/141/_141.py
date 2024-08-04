n = int(input("Nhap n: "))

dt = abs(n)

while dt >= 10:
    dt = dt // 10
    
print("Chu so dau tien", dt)
