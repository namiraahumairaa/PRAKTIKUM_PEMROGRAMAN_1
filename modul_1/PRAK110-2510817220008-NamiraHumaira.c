#include <stdio.h> 
#include <math.h>

int main()
{
    int ti = 12; 
    int al = 5; 
    int sa = al;
    int sb = sqrt(ti * ti + al * al);
    int sc = ti;
    int kel= (sa + sb + sc); 
    int lu = (al * ti) / 2;
    printf("Diketahui :\n"); 
    printf("Alas = %d cm\n", al);
    printf("tinggi = %d cm\n", ti); 
    printf("\n");
    printf("Jawab : "); 
    printf("Sisi A = %d cm\n", ti); 
    printf("Sisi B = %d cm\n", sb); 
    printf("Sisi C = %d cm\n", al);
    printf("Keliling = %d cm\n", kel); 
    printf("Luas = %d cm\n", lu); 
    return 0;
}