#include <stdio.h>
#include <stdlib.h>
/*Escribe un programa que cuete espacios
 * tabuladores y nuevas lineas.*/
int main(void)
{
  int c, nl = 0, t = 0, esp = 0;
  printf("Tab\tLine\tEsp\n");
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      ++t;
    else if (c == '\n')
      ++nl;
    else if (c == 32)
      ++esp;
  }
  printf("%d\t%d\t%d\n",t,nl,esp);
  return EXIT_SUCCESS;
}
