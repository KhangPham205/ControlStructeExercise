from math import sqrt

a = float(input("Nhap a: "))
b = float(input("Nhap b: "))
c = float(input("Nhap c: "))

delta = b * b - 4 * a * c
if (delta <= 0):
    if (delta == 0):
        x0 = -b / (2*a)
        print("Nghiem kep: ", x0)
    else:
        print("Vo nghiem!!!")
else:
    x1 = (-b + sqrt(delta)) / (2 * a)
    x2 = (-b - sqrt(delta)) / (2 * a)
    print("Nghiem thu nhat: ", x1)
    print("Nghiem thu hai: ", x2)

