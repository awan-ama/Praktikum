#include<stdio.h>
int main()
{
    int bil;
    int i = 1;
    while (i < 2){
            printf ("");
            scanf ("%d", &bil);
            if (bil <0 || bil >=100) {
                    printf("Anda Menginput Melebihi Limit Bilangan.\n");
            }
            else if (bil <=9 && bil >=1) {
                    printf ("Satuan.\n");
            }
            else if (bil <=19 && bil >=11) {
                    printf ("Belasan.\n");
            }
            else if (bil == 0) {
                    printf("Nol.\n");
            }
            else
                printf ("Puluhan.\n");
    }
}
