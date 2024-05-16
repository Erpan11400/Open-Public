//DESKRIPSI
/*Jarak Manhattan adalah jarak dari suatu titik menuju suatu titik lainnya pada suatu sistem koordinat Kartesius
dengan menyusuri bagian vertikal dan horizontal,tanpa pernah kembali.
Secara sederhana, sama dengan jumlah dari selisih absis dan selisih ordinat.
Dengan kata lain, jarak Manhattan = |x1 - x2| + |y1 - y2|.

Pak Dengklek ingin pergi dari koordinat (x1, y1) menuju (x2, y2). Tentukan jarak Manhattan yang harus ditempuh Pak Dengklek.*/
//MASUKAN
//Sebuah baris berisi empat buah bilangan bulat x1, y1, x2, dan y2.
//KELUARAN
//Sebuah baris berisi sebuah bilangan bulat yang merupakan jarak Manhattan dari kedua titik tersebut.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x1,y1,x2,y2,hasil;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    hasil = abs(x1 - x2) + abs(y1 - y2);
    
    printf("%d\n", hasil);
}

//ATAU

#include <stdio.h>

int main()
{
   int x1,y1,x2,y2,hasil,x,y,a,b;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x = x1 - x2;
    y = y1 - y2;

    if(x < 0) a = x * -1;
    else if(x > 0) a = x;
    
    if(y < 0) b = y * -1;
    else if(y > 0) b = y;

    hasil = a + b;
    
    printf("%d\n", hasil);
}
