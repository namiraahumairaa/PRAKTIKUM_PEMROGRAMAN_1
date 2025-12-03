#include <stdio.h>

int main()
{
int s1=4; 
int s2=5; 
int s3=7; 
int kt=16;
int ht=85000;

printf("Diketahui :\n");
printf("Panjang sisi segitiga berturut- turut adalah %d, %d, dan %d\n",s1, s2, s3 );
printf("Keliling Tanah Pak Dengklek adalah %d\n", kt);
printf("Harga tanah Per Meter adalah %d\n", ht);
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp%d", kt * ht);
return 0;
}