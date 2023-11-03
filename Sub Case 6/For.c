//DESKRIPSI
/*Pak Dengklek memiliki N buah kandang bebek, dinomori dari 1 sampai dengan N. Kandang ke-i berisi Bi ekor bebek.
Berapa banyaknya total bebek yang Pak Dengklek miliki?*/
//MASUKAN
//Baris pertama berisi sebuah bilangan bulat N. Baris kedua berisi N buah bilangan bulat B1, B2, ..., BN.
//KELUARAN
//Sebuah baris berisi sebuah bilangan bulat yang merupakan banyaknya total bebek.

#include <stdio.h>

int main()
{
    int a, b[1000], c = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i = 1; i <= a; i++)
    {
        c += b[i];
    }

    printf("%d\n", c);
}
