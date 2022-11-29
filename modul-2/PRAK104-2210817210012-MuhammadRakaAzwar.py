import math
a, b, c, d = 400000 , 350000, 0.13, 0.21
print("Harga sepatu A adalah", a)
print("Harga sepatu B adalah", b)
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi",math.trunc(a-(a*c)));
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi",math.trunc(b-(b*d)));