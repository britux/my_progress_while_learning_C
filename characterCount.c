#include <stdio.h>
#include <stdlib.h>
/*Cuenta los caracteres de la entrada */
int main(void)
{
  long cc;
  cc = 0;
  while (getchar() != EOF) {
    ++cc;
    printf("%ld\n",cc);
  }
  return EXIT_SUCCESS;
}
