s = 1
m = 1
i = 1
e = 1
epsilon = 10**-6

while (e >= epsilon):
    m = m * i
    e = 1 / m
    s = s + e
    i = i + 1
    
print("Ket qua: ", s)



