#include <stdio.h>


float amount;
float interest;
float monthly_payment;

float balance;
float balance2;
float balance3;

int main(void)
{

  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Interest rate: ");
  scanf("%f", &interest);
  printf("Monthly payment: ");
  scanf("%f", &monthly_payment);

  balance = amount - monthly_payment + (amount * ((interest / 100) / 12));
  balance2 = balance - monthly_payment + (balance * ((interest / 100) / 12));
  balance3 = balance2 - monthly_payment + (balance2 * ((interest / 100) / 12));

  printf("Balance remaining after first payment: $%.2f\n", balance);
  printf("Balance remaining after second payment: $%.2f\n", balance2);
  printf("Balance remaining after third payment: $%.2f\n", balance3);


  return 0;

}
