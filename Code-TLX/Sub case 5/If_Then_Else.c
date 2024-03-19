//DESKRIPSI
/*Pak Dengklek meminta Anda membuat sebuah program sebagai berikut. Program akan menerima sebuah bilangan bulat N.
Jika N adalah bilangan bulat positif, cetak positif. Jika N adalah bilangan bulat negatif, cetak negatif.
Selain itu (yakni jika N adalah nol), cetak nol.*/
//MASUKAN
//Sebuah berisi sebuah bilangan bulat N.
//KELUARAN
//Sebuah baris berisi keluaran sesuai permintaan soal.

#include <stdio.h>

int main()
{
    int b;
    scanf("%d", &b);
    if(b == 0) printf("nol\n");
    else if(b > 0) printf("positif\n");
    else if(b < 0) printf("negatif\n");
}
