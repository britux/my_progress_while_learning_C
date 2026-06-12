#include <stdio.h>
#include <stdlib.h>
/*count lines in input */
int main(void)
{
  int c,lc = 0;
  while ((c = getchar()) != EOF) 
    if (c == '\n') 
      ++lc;
  printf("%d\n", lc);
  return EXIT_SUCCESS;
}
