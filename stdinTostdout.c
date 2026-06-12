#include <stdio.h>
/* Copia la entrada a la salida */
int main(void)
{
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}
