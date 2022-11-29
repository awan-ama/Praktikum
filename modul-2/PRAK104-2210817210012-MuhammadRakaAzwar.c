#include <stdio.h>
int main(){
float a = 400000 , b = 350000, c = 0.13, d = 0.21;
char diskon = '%';
printf("\Harga sepatu A adalah %.f\n", a);
printf("\Harga sepatu B adalah %.f\n", b);
printf("\Sepatu A mendapat diskon 13 %c sehingga harganya menjadi %.f\n", diskon, a-(a*c));
printf("\Sepatu B mendapat diskon 21 %c sehingga harganya menjadi %.f\n", diskon, b-(b*d));
}
