#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
/*imprime la tabla fahr-cel  */
int main(void)
{
  int fahr;
  printf("Fahrenheit\tCelsius\n");
  for (fahr=LOWER; fahr <=UPPER; fahr += STEP) {
    printf("%3d\t\t%6.1f\n",fahr,(5.0/9.0) * (fahr - 32));
  }
  return 0;
}
