#include <stdio.h>
int main() {
    int i, num1, num2;
    while (1){
    scanf("%d %d", &num1, &num2);
    if(num1 < num2){
            for(i = num1; i <= num2; num1++, num2--){
                printf("%d ", num1);
                printf("%d ", num2);
    if(i < num2){
            printf("- ");
                }
    }
    }
    else if (num1 > num2){
            for(i = num2; i <= num1; num1--, num2++){
                printf("%d ", num1);
                printf("%d ", num2);
    if(i < num1){
            printf("- ");
            }
        }
    }
}
}
