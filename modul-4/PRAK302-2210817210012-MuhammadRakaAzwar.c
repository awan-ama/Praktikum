#include <stdio.h>
int main()
{
    int num;
    int i = 1;
    while (i < 2){
    printf ("");
    scanf ("%d", &num);
    if (num <0 || num >100) {
            printf("Nilai tidak valid.\n");
    }
    else if (num <=79 && num >=70) {
            printf("B\n");
    }
    else if (num <=69 && num >=60) {
        printf ("C\n");
    }
    else if (num <=59 && num >=50) {
        printf ("D\n");
    }
    else if (num <= 49) {
        printf ("E\n");
    }
    else
        printf ("A\n");
    }
}
