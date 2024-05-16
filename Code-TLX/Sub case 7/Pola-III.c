//DESKRIPSI
/*Pak Dengklek meminta Anda untuk memperhatikan contoh masukan dan keluaran yang diberikan,
menemukan polanya, lalu membuat program yang menghasilkan pola tersebut. Bisakah Anda?*/
//MASUKAN
//Baris pertama berisi sebuah bilangan bulat N.
//KELUARAN
//Pola berukuran N.

//CONTOH MASUKAB
// 5
//CONTOH KELUARAN
// 0
// 12
// 345
// 6789
// 01234

#include <stdio.h>

int main()
{
    int a, b = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", b);
            b++;
            if(b == 10) b = 0; 
        }
        printf("\n");
    }
}
