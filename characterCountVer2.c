#include <stdio.h>
#include <stdlib.h>
/*Porgrama que cuenta los caracteres con while and for */
int main(void)
{
  int count = 0, cc;
  while ((cc = getchar()) != EOF) {
    count++;
  }
  printf("%ld\n",count);
  return EXIT_SUCCESS;
}
