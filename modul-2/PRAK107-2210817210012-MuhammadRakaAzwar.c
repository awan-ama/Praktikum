#include <stdio.h>
int main(){
int a = 4, b = 5, c = 7;
int harga = 85000;
printf("Diketahui:\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a,b,c);
printf("Keliling tanah Pak Dengklek adalah %d\n", a+b+c);
printf("Harga tanah per meter adalah %d\n", harga);
printf("Jawaban:\n");
printf("Biaya yang diperlukan Pak Denglek adalah: Rp %d\n", harga*(a+b+c));
}
