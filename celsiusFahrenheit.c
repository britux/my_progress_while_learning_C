#include <stdio.h>
/*imprime los grados celcius de 0 300 de 20 en 20 convertidos a fahrenheit */
int main(void)
{
  float fahr, celcius;
  int step,lower,upper;
  step = 20;
  lower = 0;
  upper = 300;
  celcius = lower;

  printf("celcius\tfahrenheit\n");
  while (celcius <= upper) {
    fahr = (celcius * 1.8) + 32;
    printf("%3.0fC\t%3.1fF\n", celcius, fahr);
    celcius += step;
  }
  return 0;
}

