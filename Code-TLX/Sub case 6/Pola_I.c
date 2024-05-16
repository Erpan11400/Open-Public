//DESKRIPSI
/*Pak Dengklek meminta Anda untuk memperhatikan contoh masukan dan keluaran yang diberikan, menemukan polanya,
lalu membuat program yang menghasilkan pola tersebut. Bisakah Anda?*/

//MASUKAN
//Baris pertama berisi dua buah bilangan bulat N dan K.
//KELUARAN
//Pola berukuran N.

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++)
    {
        if(i % b == 0) printf("*");
        else printf("%d", i);
        if(i < a) printf(" ");
    }
}
