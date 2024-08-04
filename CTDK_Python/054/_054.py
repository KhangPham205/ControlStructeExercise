n = int(input("Nhap n: "))

s = 0
i = 2
while(i <= n):
    if n % i == 0:
        s = s + i    
    i = i + 2

print("Tong uoc chan: ", s)