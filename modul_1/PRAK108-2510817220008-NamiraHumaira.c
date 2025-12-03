#include <stdio.h>

int main()
{
float mt = 5; 
float jt = 14; 
float phi = 3.14;
float keli = jt / mt ;
float r = keli / (2 * phi);
printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",mt);
printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",jt);
printf("\n");
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", r);
return 0;
} 