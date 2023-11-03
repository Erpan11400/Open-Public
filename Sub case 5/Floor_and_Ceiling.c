//DESKRIPSI
/*Nilai floor dari sebuah bilangan riil adalah bilangan bulat terbesar yang masih lebih kecil daripada atau sama dengan bilangan tersebut.
Sebaliknya, nilai ceiling dari sebuah bilangan riil adalah bilangan bulat terkecil yang masih lebih besar daripada atau sama dengan bilangan tersebut.

Pak Dengklek memberikan Anda sebuah bilangan riil N. Tentukan nilai floor dan ceiling dari N.*/
//MASUKAN
//Sebuah baris berisi sebuah bilangan riil N.
//KELUARAN
//Sebuah baris berisi F C, dengan F adalah floor dari N dan C adalah ceiling dari N.

#include <stdio.h>

int main()
{
    float a,p;
    scanf("%f", &a);
    p = (int)a + 0.5;
    if(a == (int)a){
        printf("%d %d", (int)a, (int)a);
    }
    else if(a > 0){
        if(a >= p) printf("%d %d\n", (int)a, (int)a+1);
    }
    else if(a < 0){
        if(a <= p) printf("%d %d\n", (int)a-1, (int)a);
    }
}
