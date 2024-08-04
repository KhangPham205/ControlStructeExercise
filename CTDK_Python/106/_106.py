from math import pi


x = float(input("Nhap x: "))

xx = (x * pi) / 180
s = xx
t = xx
m = 1
dau = -1
i = 3
e = xx
epsilon = 10**-6

while (e >= epsilon):
    t = t * xx * xx
    m = m * i * (i - 1)
    e = t / m
    s = s + dau * e
    dau = -dau
    i = i + 2
    
print("sin(x) = ", s)


