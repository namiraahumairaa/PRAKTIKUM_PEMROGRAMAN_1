#include<stdio.h>
int main()
{
char nama[30], NIM[30], kelasparalel[30], tempattanggallahir[30], alamat[30], hobby[30], nohp[30];
printf("Nama\t\t\t:"); 
gets(nama);
printf("NIM\t\t\t:"); 
gets(NIM);
printf("Kelas Paralel \t\t:"); 
gets(kelasparalel);
printf("Tempat/Tanggal Lahir \t:"); 
gets(tempattanggallahir);
printf("Alamat \t\t\t:");
gets(alamat);
printf("Hobby \t\t\t:"); 
gets(hobby);
printf("No. HP\t\t\t:"); 
gets(nohp);
printf("\n");
    printf("Nama\t\t\t : %s\n", nama);
    printf("NIM\t\t\t : %s\n", NIM);
    printf("Kelas Paralel\t\t : %s\n", kelasparalel);
    printf("Tempat/Tanggal Lahir\t : %s\n", tempattanggallahir);
    printf("Alamat\t\t\t : %s\n", alamat);
    printf("Hobby\t\t\t : %s\n", hobby);
    printf("No. HP\t\t\t : %s\n", nohp);
    return 0;
}