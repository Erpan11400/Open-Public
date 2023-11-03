//DESKRIPSI
/*Pak Dengklek menggambar sebuah segitiga yang alasnya berukuran A cm dan tingginya berukuran T cm.
Ia ingin menghitung luas dari segitiga tersebut, tetapi ia lupa caranya. Bantulah dia.*/

//MASUKAN
//Sebuah baris berisi dua buah bilangan bulat A dan T.
//KELUARAN
//Sebuah baris berisi sebuah bilangan riil yang menyatakan luas dari segitiga tersebut dalam cm persegi, dengan tepat dua angka di belakang koma.

#include <stdio.h>

int main(){
    float A, B,hasil;
    scanf("%f %f", &A, &B);
    hasil = A * B / 2;
    printf("%.2f", hasil);
}
