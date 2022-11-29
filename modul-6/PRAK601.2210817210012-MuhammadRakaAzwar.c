#include<stdio.h>
int main(){
    int mat[100][100];
    int row, column, i, j;
    scanf("%d", &row);
    scanf("%d", &column);
    printf("");

for(i = 0;i < row;i++){
    for(j = 0;j < column;j++){
            scanf("%d", &mat[i][j]);
    }

    printf("\n");
}

for(i = 0;i < row;i++){
    for(j = 0;j < column;j++){
        printf("%d\t",mat[i][j]);}

printf("\n");}
}
