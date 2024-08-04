x = float(input("Nhap x: "))

s = 1
t = 1
m = 1
i = 1
e = 1
epsilon = 10**-6

while (e >= epsilon):
    t = t * x
    m = m * i
    e = t / m
    s = s + e
    i = i + 1
    
print("Ket qua: ", s)


