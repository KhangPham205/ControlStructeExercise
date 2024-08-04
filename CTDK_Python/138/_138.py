x = float(input("Nhap x: "))

if x < 0:
    f = -2 * x * x * x + 6 * x + 9
elif 0 <= x <= 1:
    f = 5 * x - 7
else:
    f = 2 * x * x * x + 5 * x * x - 8 * x + 3
    
print("Ket qua: ", f)

