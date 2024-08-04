n = int(input("Nhap n: "))

s = 0
dau = 1
i = 1
e = 4
epsilon = 10**-6

while (e >= epsilon):
    e = 4 / i
    s = s + dau * e
    dau = -dau
    i = i + 2
    
print("Ket qua: ", s)