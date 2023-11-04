//DESKRIPSI
/*Pak Dengklek meminta Anda untuk memperhatikan contoh masukan dan keluaran yang diberikan,
menemukan polanya, lalu membuat program yang menghasilkan pola segitiga siku rata kanan. Bisakah Anda?*/

//MASUKAN
//Baris pertama berisi sebuah bilangan bulat N.
//KELUARAN
//Pola berukuran N.

//CONTOH MASUKAN
//5
//CONTOH KELUARAN
//    *
//   **
//  ***
// ****
//*****


#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = a; i >= 1; i--)
    {
        for(int j = 1; j <= a; j++)
        {
            if(j >= i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
