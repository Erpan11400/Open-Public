//DESKRIPSI
/*Pak Dengklek memiliki banyak baris berisi bilangan-bilangan bulat.
Anda diminta untuk menghitung jumlah dari bilangan-bilangan bulat tersebut.*/
//MASUKAN
//Beberapa baris, masing-masing berisi sebuah bilangan bulat.
//KELUARAN
//Sebuah baris berisi sebuah bilangan bulat yang merupakan jumlah dari bilangan-bilangan pada masukan.


//TIPS
/*EOF adalah cara untuk mengakhiri input ctrl+D (untuk linuk dan mac)*/
/* Cara agar bisa scanf sampai EOF
#include <cstdio>

int main() {
  char masukan[101];
  while (scanf("%s", masukan) != EOF) {
    printf("belum EOF!\n");
  }
}
*/


#include <stdio.h>

int main()
{
    int a, i = 0;
    while (scanf("%d", &a) != EOF)
    {
        i += a;
    }
    printf("%d\n", i);
}
