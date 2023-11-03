//DESKRIPSI
/*Di samping memelihara bebek, Pak Dengklek pun memiliki seekor burung beo kesayangan.
Burung beo ini selalu mengulangi secara persis apapun ucapan yang dilontarkan kepadanya.

Pak Dengklek iseng-iseng ingin memiliki sebuah program komputer yang menirukan sifat burung beo tersebut.
Ia ingin memiliki program yang menerima beberapa kata, kemudian mencetak kembali semua kata tersebut secara persis.

Bantulah Pak Dengklek membuat program tersebut.*/

//MASUKAN
/*Beberapa baris, masing-masing berisi sebuah kata. Perhatikan bahwa banyaknya baris tidak diberikan kepada Anda.
Anda harus membaca baris-baris sampai masukan habis. Lihat bagian Petunjuk untuk lebih jelasnya.*/

//KELUARAN
//Sejumlah baris yang sama persis dengan masukan.

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
    char a[100];
    while (scanf("%s", a) != EOF)
    {
        printf("%s\n", a);
    }
}
