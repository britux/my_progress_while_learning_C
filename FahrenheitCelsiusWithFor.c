#include <stdio.h>
/* imprime la tabla farh celcius con el ciclo for */
int main(void)
{
  int farh;
  printf("Fahrenheit\tCelcius\n");
  for (farh = 0; farh <= 300; farh+=20) {
    printf("%3d\t\t%6.1f\n",farh,(5.0/9.0) * (farh - 32));
  }
  return 0;
}

