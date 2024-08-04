s = 4 - 2 / 4 - 1 / 5 - 1 / 6
t = 1
i = 1
e = 1
epsilon = 10**-6

while (e >= epsilon):
    t = t * 16
    e = (4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6)) / t
    s = s + e
    i = i + 2
    
print("Ket qua: ", s)