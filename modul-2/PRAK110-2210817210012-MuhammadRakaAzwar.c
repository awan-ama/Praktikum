#include <stdio.h>
int main(){
float a = 12, c = 5, b = sqrt((a*a)+(c*c));
printf("Diketahui :\n");
printf("Alas = %.f cm\n", c);
printf("Tinggi = %.f cm\n", a);
printf("\n");
printf("Sisi A = %.f cm\n", a);
printf("Sisi B = %.f cm\n", sqrt((a*a)+(c*c)));
printf("Sisi C = %.f cm\n", c);
printf("Keliling = %.f cm\n", a+b+c);
printf("Luas = %.f cm\n", 0.5*a*c);
}
