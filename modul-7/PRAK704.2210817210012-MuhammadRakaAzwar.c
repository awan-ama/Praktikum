#include <stdio.h>
#include <string.h>
int main(){
    char asli [100];
    char palsu [100];
    scanf("%[^\n]%c", &asli);
    scanf("%[^\n]%c", &palsu);
    int x = 0, y = 0, i, kode, pesan;
    kode = strlen(asli);
    pesan = strlen(palsu);
    if (kode != pesan){
        printf("Panjang kalimat berbeda, pesan palsu.");
    }
    else{
        for(i = 0; i < kode; i++){
            if(asli[i] == palsu [i]){
                printf("*");
                x++;
            }
            else{
                printf("#");
                y++;
            }
        }
        printf("\n* = %d", x);
        printf("\n# = %d", y);
        if (x >= y){
            printf("\nPesan Asli.");
        }
        else{
            printf("\nPesan Palsu");
        }
    }
}
