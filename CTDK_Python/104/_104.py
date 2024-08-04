s = 0
i = 1
e = 0.5
epsilon = 10**-6

while (e >= epsilon):
    e = 1 / (i * (i + 1))
    s = s + e
    i = i + 1
    
print("Ket qua:", s)

