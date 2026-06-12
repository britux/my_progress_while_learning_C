#include <stdio.h>
#include <stdlib.h>
/* copia la entrada a la salida */
int main(void)
{
  int c;
  while ((c = getchar()) != EOF) {
    printf("%d\n",c);
    putchar(c);
  }
  return EXIT_SUCCESS;
}


