#include<stdio.h>
int main()
{
    int detik1,detik2,menit,jam,hari,temp;
    int i = 1;
    while (i < 2){
            printf("");
            scanf("%d",&detik1);

            hari=detik1/86400;
            temp=detik1%86400;
            jam=temp/3600;
            temp=temp%3600;
            menit=temp/60;
            detik2=temp%60;
            if (detik1 >= 86400)
                printf("%d hari %02d:%02d:%02d\n",hari,jam,menit,detik2);
            else
                printf("%02d:%02d:%02d\n",jam,menit,detik2);
    }
}
