#include <stdio.h>
int main() {
    int i, a, b;
    while (1) {
            printf ("");
            scanf ("%d", &a);
            for (i = 1; i <= a; i++){
                    if (i % 2 != 0) {
                        printf ("%d ", i);
                        }
                    }
                    printf("\n");
            for (b = a; b >= 1; b--){
                    if (b %2 == 0){
                        printf("%d ", b);{
                        }
                    }
            }
    }
}
