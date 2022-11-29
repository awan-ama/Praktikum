#include <stdio.h>
int main(){
float putar = 5, jarak = 14;
float setengah = 0.5, phi = 3.14;
printf("Diketahui:\n");
printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putar);
printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", jarak);
printf("Jawaban:\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer \n", (jarak/putar)*setengah/phi);
}
