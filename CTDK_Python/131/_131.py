from math import sqrt

print("Diem thu nhat: ")
x1 = float(input("Nhap hoanh do: "))
y1 = float(input("Nhap tung do: "))

print("Diem thu hai: ")
x2 = float(input("Nhap hoanh do: "))
y2 = float(input("Nhap tung do: "))

print("Diem thu ba: ")
x3 = float(input("Nhap hoanh do: "))
y3 = float(input("Nhap tung do: "))

a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))
b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1))
c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3))

print("Diem thu nhat: ")
print("Hoanh do: ", x1)
print("Tung do: ", y1)

print("Diem thu nhat: ")
print("Hoanh do: ", x2)
print("Tung do: ", y2)

print("Diem thu ba: ")
print("Hoanh do: ", x3)
print("Tung do: ", y3)

if a + b > c and a + c > b and b + c > a:
    print("La tam giac")
else:
    print("Khong la tam giac")