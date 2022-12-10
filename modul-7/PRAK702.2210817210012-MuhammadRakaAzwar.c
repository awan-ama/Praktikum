#include <stdio.h>
int main(){
    int isi, kolom, i;
    scanf("%d", &kolom);
    int matriks[kolom];
    for (i = 0; i < kolom; i++){10
5 6 45 78 21 3 6 8 45 110
5 6 45 78 21 3 6 8 45 110
        scanf("%d", &isi);
        matriks[i] = isi;
    }
    for (i = 0; i < kolom; i++){
        printf("%d ", (i + 1)*matriks[i]);
    }
    printf("\n");
}
