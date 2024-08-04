print("Diem thu nhat: ")
x1 = float(input("Nhap hoanh do: "))
y1 = float(input("Nhap tung do: "))

print("Diem thu hai: ")
x2 = float(input("Nhap hoanh do: "))
y2 = float(input("Nhap tung do: "))

print("Diem thu ba: ")
x3 = float(input("Nhap hoanh do: "))
y3 = float(input("Nhap tung do: "))

print("Diem can kiem tra: ")
x0 = float(input("Nhap hoanh do: "))
y0 = float(input("Nhap tung do: "))

SABC = abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3)
SMAB = abs(x1 * y2 + x2 * y0 + x0 * y1 - x2 * y1 - x0 * y2 - x1 * y0)
SMBC = abs(x0 * y2 + x2 * y3 + x3 * y0 - x2 * y0 - x3 * y2 - x0 * y3)
SMAC = abs(x1 * y0 + x0 * y3 + x3 * y1 - x0 * y1 - x3 * y0 - x1 * y3)

print("Diem thu nhat: ")
print("Hoanh do: ", x1)
print("Tung do: ", y1)

print("Diem thu nhat: ")
print("Hoanh do: ", x2)
print("Tung do: ", y2)

print("Diem thu ba: ")
print("Hoanh do: ", x3)
print("Tung do: ", y3)

print("Diem can kiem tra: ")
print("Hoanh do: ", x0)
print("Tung do: ", y0)

S = SMAB + SMAC + SMBC
if S == SABC:
    print("M trong tam giac")
else:
    print("M khong trong tam giac")