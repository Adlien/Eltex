#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int b = 0;
  printf("--> ");
  scanf("%d", &b);
  b = abs(b);
  printf("\n");
  b <<= 1;
  printf("1");
  for (int i = 0; i < 7; i++) {
    printf("%c", (b & 0x80) ? '1' : '0');  //0x80 потому что 8-ричная система
    b <<= 1;
  }
  printf("\n");
}