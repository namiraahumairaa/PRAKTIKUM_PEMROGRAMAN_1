#include <stdio.h>

int main()
{
float A = 400000;
float d1 = 13;
float rA;

float B = 350000;
float d2 = 21;
float rB;

rA = A - (A * (d1/100));
rB = B - (B * (d2/100));

printf("Harga sepatu A adalah %.0f\n", A);
printf("Harga sepatu B adalah %.0f\n", B);
printf("Sepatu A mendapat diskon %.0f persen sehingga harganya menjadi %.0f\n", d1, rA);
printf("Sepatu B mendapat diskon %.0f persen sehingga harganya menjadi %.0f\n", d2, rB);
return 0;
}