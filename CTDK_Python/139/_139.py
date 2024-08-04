from math import sqrt

a = float(input("Nhap a: "))
b = float(input("Nhap b: "))

if (a == 0):
    if (b == 0):
        print("Vo so nghiem!!!")
    else:
        print("Vo nghiem!!!")
else:
    x = -b / a
    print("Nghiem: ", x)

