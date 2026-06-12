#include <stdio.h>
#include <stdlib.h>
/*Cuenta palabras con for */
int main(void)
{
  double nc;
  for (nc = 0; getchar() != EOF; ++nc) 
    ; 
    printf("%.0f\n",nc);
  return EXIT_SUCCESS;
}
