#include <stdio.h>
 int main (){
     while (1){
     int a, b, add, sum, miti;
     miti = 0;
     add = 0;
         scanf ("%d %d", &a, &b);

         for (int i = 0; i < a; i++) {

             for (int c = i; c >= 0; c--){
                 printf ("(%d * %d)", c+1, b);
                 if (c > 0) {
                     printf(" + ");
                 }
             }
         sum = (i+1)*b;
         add += sum;
         printf (" = %d\n", add);
         miti += add;
         }
         printf("%d", miti);
 }
 }
