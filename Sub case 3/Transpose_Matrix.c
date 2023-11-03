//DESKRIPSI
/*Pak Dengklek memberikan Anda sebuah matriks A yang berukuran 3 × 3.
Tentukan transpos dari matriks A tersebut.*/
//MASUKAN
//Tiga buah baris berisi anggota-anggota matriks A sesuai format.
//KELUARAN
//Tiga buah baris berisi anggota-anggota transpos dari matriks A sesuai format di atas.

#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    scanf("%d %d %d", &g, &h, &i);
    printf("%d %d %d\n", a,d,g);
    printf("%d %d %d\n", b,e,h);
    printf("%d %d %d\n", c,f,i);
}
