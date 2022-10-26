import math
a, b = input().split()
a = float (a)
b = float (b)
print(f"Alas = {math.sqrt(b*b-a*a)} cm")
print(f"Tinggi = {a} cm", )
print(f"Keliling = {a+b+math.sqrt(b*b-a*a)} cm")
print(f"Luas = {0.5*math.sqrt(b*b-a*a)*a} cm^2")