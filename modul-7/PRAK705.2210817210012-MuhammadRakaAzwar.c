#include <stdio.h>
int main(){
    int matriks_a[20][20], matriks_b[20][20], matriks_kali[20][20];
    int x, y, z, i, jumlah = 0;
    scanf("%d", &i);
    printf("Matriks A\n");
    for(x = 0; x < i; x++){
        for(y = 0; y < i; y++){
            scanf("%d", &matriks_a[x][y]);
            }
        }
        printf("Matriks B\n");
        for(x = 0; x < i; x++){
                for(y = 0; y < i; y++){
                    scanf("%d", &matriks_b[x][y]);
            }
        }
        for(x = 0; x < i; x++){
                for(y = 0; y < i; y++){
                    for(z = 0; z < i; z++){
                        jumlah = jumlah + matriks_a[x][z] * matriks_a[z][y];
            }
        matriks_kali[x][y] = jumlah;
        jumlah = 0;
            }
        }
        printf("Matriks AXB\n");
        for(x = 0; x < i; x++){
                for(y = 0; y < i; y++){
                    printf("%d ", matriks_kali[x][y]);
        }
        printf("\n");}
}
