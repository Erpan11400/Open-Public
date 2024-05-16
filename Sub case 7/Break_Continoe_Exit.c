#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);

  for(int i = 1; i <= a; i++)
  {
    if(i % 10 == 0) continue;
    else if(i == 42) {printf("ERROR\n"); break;}
    printf("%d", i);
    printf("\n");
  }
}