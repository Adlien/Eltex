#include <stdio.h>

int main(void)
{
  int b = 0;
  printf("--> ");
  scanf("%d", &b);
  printf("\n");
  for (int i = 0; i < 8; i++) {
    printf("%c", (b & 0x80) ? '1' : '0');  //0x80 потому что 8-ричная система
    b <<= 1;
  }
  printf("\n");
  return 0;
}