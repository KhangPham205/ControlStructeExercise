n = int(input("Nhap n: "))

t = 1
i = 1
while(i <= n):
    if n % i == 0:
        t = t * i
    i = i + 1

print("Tich cac uoc so: ", t)
