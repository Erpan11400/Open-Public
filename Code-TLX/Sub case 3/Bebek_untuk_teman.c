//DESKRIPSI
/*Pak Dengklek memiliki N ekor bebek. Ia ingin membagi-bagikan bebek-bebeknya tersebut sama rata kepada M orang temannya.
Pak Dengklek juga menyadari bahwa bisa saja terdapat sisa bebek karena banyaknya bebek tidak habis dibagi banyaknya temannya.

Bantulah Pak Dengklek untuk menentukan berapa ekor bebek yang harus dia berikan kepada masing-masing temannya, dan berapa sisanya.*/

//MASUKAN
//Sebuah baris berisi dua buah bilangan bulat N dan M.
//KELUARAN
//Baris pertama berisi masing-masing A, dengan A adalah banyaknya bebek yang diberikan kepada masing-masing temannya. Baris kedua berisi bersisa B, dengan B adalah banyaknya sisa bebek Pak Dengklek.

#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("masing-masing %d\n", A / B);
    printf("bersisa %d", A % B);
}
