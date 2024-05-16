//DESKRIPSI
/*Faktor-faktor suatu bilangan bulat N adalah bilangan-bilangan bulat positif yang habis membagi N.
Misalnya, faktor dari 24 adalah 24, 12, 8, 6, 4, 3, 2, dan 1.

Pak Dengklek memberikan Anda sebuah bilangan bulat N. Tentukan faktor-faktor dari N.*/

//MASUKAN
//Sebuah baris berisi sebuah bilangan bulat N.
//KELUARAN
//Faktor-faktor dari N, masing-masing dalam sebuah baris, terurut dari besar ke kecil.

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = a; i >= 1; i--){
        if(a % i == 0) printf("%d\n",i);
    }
}
