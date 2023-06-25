#include <stdio.h>

#define TAX 1.05
float amount;
float tax_added;


int main(void)
{

  printf("Enter an amount: ");
  scanf("%f", &amount);
  tax_added = amount * TAX;
  printf("With tax added: %f\n", tax_added);


  return 0;

}
