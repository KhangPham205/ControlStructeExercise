s = 3
dau = 1
i = 2
e = 3
epsilon = 10**-6

while (e >= epsilon):
    e = 4 / (i * (i + 1) * (i + 2))
    s = s + dau * e
    dau = -dau
    i = i + 2
    
print("Ket qua: ", s)
