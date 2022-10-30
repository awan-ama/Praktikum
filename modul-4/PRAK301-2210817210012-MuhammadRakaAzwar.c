#include <stdio.h>
int main ()
{
    int i = 1;
    while (i < 2) {
            int a;
            int b;
            printf ("");
            scanf ("%d %d", &a, &b);
            if (a < b) {
                printf ("%d %d\n", a, b);
            }
            else {
                printf ("%d %d\n", b, a);
            }
    }
}
