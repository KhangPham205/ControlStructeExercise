x = int(input("Nhap x: "))
y = int(input("Nhap y: "))

n = x
print("Nhung nam nhuan trong khoan", x, ",", y)
while n <= y:
    dk1 = (n % 4 == 0 and n % 100 != 0)
    dk2 = (n % 400 == 0)
    if dk1 or dk2:
        print(n, end = ' ')
    n = n + 1
