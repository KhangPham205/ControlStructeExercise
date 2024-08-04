a = float(input("Nhap a: "))
b = float(input("Nhap b: "))

if a > b:
    a, b = b, a
    
print("Ket qua a = ", a, " b = ", b)
