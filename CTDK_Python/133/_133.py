x = float(input("Nhap x: "))
y = float(input("Nhap y: "))
z = float(input("Nhap z: "))

if x + y > z and x + z > y and y + z > x:
    if x == y and y == z:
        print("TG deu")
    else: 
        if x * x == y * y + z * z or y * y == x * x + z * z or z * z == y * y + x * x:
            if x == y or y == z or x == z:
                print("TG vuong can")
            else:
                print("TG vuong")
        else:
            if x == y or y == z or x == z:
                print("TG can")
            else:
                print("TG thuong")
else:
    print("Khong la tam giac")
