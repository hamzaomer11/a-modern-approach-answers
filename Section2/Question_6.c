#include <stdio.h>

float x;
float formula;

int main(void)
{

  printf("Enter value for x: ");
  scanf("%f", &x);
  formula = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("Result of formula: %.2f\n", formula);


  return 0;

}



