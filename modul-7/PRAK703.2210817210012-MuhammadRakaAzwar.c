#include <stdio.h>
int main(){
    int angka, a, b, i;
    scanf("%d %d", &a, &b);
    if(a != b){
        printf("Jumlah tidak sama");
    }
    else{
        int baris_a[a]; int baris_b[b];
        for (i = 0; i < a; i++){
            scanf("%d", &baris_a[i]);
        }
        for (i = 0; i < b; i++){
            scanf("%d", &baris_b[i]);
        }
        for (i = 0; i < a; i++){
            angka = baris_a[i]*baris_b[i];
            printf("%d ", angka);
        }
    }
}
