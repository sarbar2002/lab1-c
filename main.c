#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char *tempstr = readline("Enter temperature in celsius: "); 
  double temp = atof(tempstr);
  double ftemp = (temp*9/5 + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",temp, ftemp);
}