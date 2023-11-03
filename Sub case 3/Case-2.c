/*Di samping memelihara bebek, Pak Dengklek pun memiliki seekor burung beo kesayangan.
Burung beo ini selalu mengulangi secara persis apapun ucapan yang dilontarkan kepadanya.

Pak Dengklek iseng-iseng ingin memiliki sebuah program komputer yang menirukan sifat burung beo tersebut.
Ia ingin memiliki program yang menerima sebuah kalimat, kemudian mencetak kembali kalimat tersebut secara persis.

Bantulah Pak Dengklek membuat program tersebut.*/

//MASUKAN
//Sebuah baris berisi sebuah kalimat.
//KELUARAN
//Sebuah baris berisi sebuah kalimat yang sama persis dengan masukan.

#include <stdio.h>

int main(){
    char A[100];
    scanf("%[^\n]", &A);
    printf("%s", A); 
}
