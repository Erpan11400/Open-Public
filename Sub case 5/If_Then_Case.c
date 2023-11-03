//DESKIRPSI
/*Pak Dengklek meminta Anda membuat sebuah program sebagai berikut. Program akan menerima sebuah bilangan bulat N.
Jika N merupakan satuan, cetak satuan. Jika N merupakan puluhan, cetak puluhan. Jika N merupakan ratusan, cetak ratusan.
Jika N merupakan ribuan, cetak ribuan. Jika N merupakan puluh ribuan, cetak puluhribuan.*/
//MASUKAN
//Sebuah berisi sebuah bilangan bulat N.
//KELUARAN
//Sebuah baris berisi keluaran sesuai permintaan soal.

#include <stdio.h>

int main()
{
    int b;
    scanf("%d", &b);
    if(b > 0 && b < 10) printf("satuan\n");
    else if(b >= 10 && b < 100) printf("puluhan\n");
    else if(b >= 100 && b < 1000) printf("ratusan\n");
    else if(b >= 1000 && b < 10000) printf("ribuan\n");
    else if(b >= 10000 && b < 100000) printf("puluhribuan\n");
}
