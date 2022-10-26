# include <stdio.h>
int main() {
float r, t;
const float phi = 22.0 / 7.0;
printf(" ");
scanf("%f%f", &r, &t);
printf("Volume = %.2f\n", phi*(r*r)*t);
printf("Luas = %.2f\n", 2*(2*phi*(r*r)));
printf("Keliling = %.2f\n", 2*phi*r);
}
