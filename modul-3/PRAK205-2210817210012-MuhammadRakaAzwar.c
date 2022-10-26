#include <stdio.h>
int main() {
float a, b;
printf(" ");
scanf("%f%f", &a, &b);
printf("Alas = %.f cm\n", sqrt(b*b-a*a));
printf("Tinggi = %.f cm\n", a);
printf("Keliling = %.f cm\n", a+b+sqrt(b*b-a*a));
printf("Luas = %.f cm^2\n", 0.5*sqrt(b*b-a*a)*a);
}
