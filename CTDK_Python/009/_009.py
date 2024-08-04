import math

n = int(input("Nhao n: "))
r = float(input("Nhao r: "))

s = n * r * r * math.sin(2 * math.pi / n) / 2

print("Dien tich da giac: ", s)

