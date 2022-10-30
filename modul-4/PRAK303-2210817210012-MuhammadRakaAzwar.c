#include<stdio.h>
int main()
{
  int n;
  int i = 1;
  while (i < 2){
    printf ("");
    scanf ("%d", &n);
    if (n == 0) {
        printf("Nol.\n");
    }
    else if (n >=1) {
        printf("Positif.\n");
    }
    else
    printf ("Negatif.\n");
    }
}
