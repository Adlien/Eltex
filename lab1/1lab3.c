#include <stdio.h>

int main(void)
{
  int b = 0;
  int k = 0;
  printf("--> ");
  scanf("%d", &b);
  printf("\n");
  for (int i = 0; i < 8; i++) {
    printf("%c", (b & 0x80) ? '1' : '0');  //0x80 потому что 8-ричная система
    k += (b & 0x80) ? 1 : 0;
    b <<= 1;
    
  }
  printf("\nколичество единиц - %d\n", k);
  return 0;
}