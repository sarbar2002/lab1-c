// Author Sarthak Singh sxs6666@psu.edu
// Collabrator Anthony Aguilar axa6168@psu.edu
// Caollabrator Justin Maines jtm5948@psu.edu
//Collabrator Maurizio Hazoury  mbh5817@psu.edu
 




#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char *tempstr = readline("Enter temperature in celsius: "); 
  double temp = atof(tempstr);
  double ftemp = (temp*9/5 + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",temp, ftemp);
}