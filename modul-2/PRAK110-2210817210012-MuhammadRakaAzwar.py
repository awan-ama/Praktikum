import math 
a, c= 12, 5
b = math.sqrt((a*a)+(c*c))
print("Diketahui :")
print("Alas =", c)
print("Tinggi =", a)
print(" ")
print("Sisi A = %d cm" % a)
print("Sisi B = %d cm" % round(math.sqrt((a*a)+(c*c))))
print("Sisi C = %d cm" % c)
print("Keliling = %d cm" % (a+b+c))
print("Luas = %d cm" % (0.5*a*c))