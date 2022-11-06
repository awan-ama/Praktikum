#include <stdio.h>
int main(){
float i, num1, num2;
while (1){
    printf("Pilih program: \n");
    printf("1. Penjumlahan \n");
    printf("2. Pengurangan \n");
    printf("3. Perkalian \n");
    printf("4. Pembagian \n");
    printf("5. Exit \n");
    printf("Masukkan pilihan: ");
    scanf("%f", &i);
    if (i > 5 || i < 1){
        printf("Input anda salah, silahkan coba lagi.\n");
        continue;
    }
    else if (i == 5) {
        printf("Terima kasih, telah menggunakan kalkulator Muhammad Raka Azwar.");
        break;
    }
    printf("Masukkan nilai pertama: ");
    scanf("%f", &num1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &num2);
    if (i == 1){
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1+num2);
    }
    else if (i == 2){
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1-num2);
    }
    else if (i == 3){
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1*num2);
    }
    else if (i == 4){
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1/num2);
    }
    }
}
