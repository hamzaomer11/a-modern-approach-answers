#include <stdio.h>

/*

1. Assign variables to $20, $10, $5, $1
2. Divide input by variables
3. 


 */

int a = 20;
int b = 10;
int c = 5;
int d = 1;
int amount;
int calc;
int calc2;
int calc3;
int calc4;


int main(void)
{

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);
  calc = amount / a;
  calc2 = (amount - (calc * a)) / b;
  calc3 = (amount - ((calc * a) + (calc2 * b))) / c;
  calc4 = (amount - ((calc * a) + (calc2 * b) + (calc3 * c))) / d;
  printf("$20 bills: %d\n", calc);
  printf("$10 bills: %d\n", calc2);
  printf("$5 bills: %d\n", calc3);
  printf("$1 bills: %d\n", calc4);

  return 0;

}
