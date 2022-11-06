#include <stdio.h>
int main () {
    int a, b;
    while (1){
        printf ("");
        scanf ("%d %c", &a, &b);
        for(int i=1;i<=50;i++)
            if (i % a == 0){
                printf ("%c ", b);
            }
        else printf("%d ",i);
    }
}
