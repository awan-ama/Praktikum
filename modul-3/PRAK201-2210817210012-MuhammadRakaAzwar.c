#include <stdio.h>
int main(){
char nama [50];
char nim [50];
char kelas [50];
char ttl [50];
char alamat [50];
char hobi [50];
char hp [50];
//Input
printf("Nama                  : ");
fgets(nama, 50, stdin);
printf("NIM                   : ");
fgets(nim, 50, stdin);
printf("Kelas Paralel         : ");
fgets(kelas, 50, stdin);
printf("Tempat/Tanggal Lahir  : ");
fgets(ttl, 50, stdin);
printf("Alamat                : ");
fgets(alamat, 50, stdin);
printf("Hobby                 : ");
fgets(hobi, 50, stdin);
printf("No. HP                : ");
fgets(hp, 50, stdin);
//Output
printf("\n");
printf("\Nama                  : %s", nama);
printf("\NIM                   : %s", nim);
printf("\Kelas Paralel         : %s", kelas);
printf("\Tempat/Tanggal Lahir  : %s", ttl);
printf("\Alamat                : %s", alamat);
printf("\Hobby                 : %s", hobi);
printf("\No. HP                : %s", hp);
}
