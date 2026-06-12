#include <stdio.h>
#include <stdlib.h>
/* Verifique que la expresion getchar != EOF*/
int main(void)
{
  int c;
  c = getchar() != EOF;
  printf("%d\n",c);
  return EXIT_SUCCESS;
}
