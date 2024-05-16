//DESKRIPSI
/*Bilangan dua pangkat adalah bilangan bulat yang dapat dinyatakan dalam bentuk 2K, dengan K adalah suatu bilangan bulat.

Pak Dengklek memberikan Anda sebuah bilangan bulat N. Tentukan apakah N adalah bilangan "dua pangkat" atau bukan.*/

//MASUKAN
//Baris pertama berisi sebuah bilangan bulat N.
//KELUARAN
//Sebuah baris berisi ya apabila N adalah bilangan dua pangkat, atau bukan apabila bukan.

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    while (a % 2 == 0)
    {
        a /= 2;
    }
    if(a == 1) printf("ya\n");
    else printf("bukan\n");
    
}
