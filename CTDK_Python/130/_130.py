x = float(input("Nhap x: "))
y = float(input("Nhap y: "))
z = float(input("Nhap z: "))

if x + y > z and x + z > y and y + z > x:
    print("La tam giac")
else:
    print("Khong la tam giac")
