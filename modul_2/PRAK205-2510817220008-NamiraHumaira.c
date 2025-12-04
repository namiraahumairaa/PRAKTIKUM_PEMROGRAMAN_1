#include <stdio.h> 
#include <math.h>
int main()
{
    int Aa, Bb, Cc, ti, kel, lu; 
printf("\n");
scanf("%d %d", &Aa, &Bb);
Cc =sqrt(pow((Bb),2)-pow((Aa),2)); 
kel =Aa + Bb + Cc;
lu = Aa * Cc / 2; 
printf("Alas = %d \n", Cc); 
printf("Tinggi = %d \n", Aa);
printf("Keliling = %d \n", kel); 
printf("Luas = %d cm^2\n", lu);
return 0;
}