#include <stdio.h>
int main (){
    int isi, baris, kolom, a, b;
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom];
    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++){
            scanf("%d", &isi);
            matriks[a][b] = isi;
        }
    }
    for (a = 0; a < baris; a++) {
        for (b = 0; b < kolom; b++){
            printf("%d ", matriks[a][b]);

        }
        printf("\n");
    }
}
