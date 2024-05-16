//DESKRIPSI
/*Pak Dengklek memiliki Anda N buah bilangan bulat. Di antara bilangan-bilangan tersebut, tentukan bilangan terbesar dan bilangan terkecil.*/

//MASUKAN
//Baris pertama berisi sebuah bilangan bulat N. Baris berikutnya berisi N buah bilangan bulat
//KELUARAN
//Sebuah baris berisi A B, dengan A adalah bilangan terbesar dan B adalah bilangan terkecil.

#include <stdio.h>

int main()
{
    int a, b[100], kecil, besar;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    kecil = b[0];
    for(int i = 0; i < a; i++)
    {
        if(kecil > b[i]) kecil = b[i];
    }
    besar = b[0];
    for(int i = 0; i < a; i++)
    {
        if(besar < b[i]) besar = b[i];
    }
    printf("%d %d\n", besar, kecil);
}
