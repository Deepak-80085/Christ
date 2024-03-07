#include <stdio.h>

int main() {
  
  int a;
  char tax;

  printf("Enter your annual income: ");
  scanf("%d", &a);

  if (a<=250000) {
    tax= 0;
  } else if (a<=500000) {
    tax = a*0.05;
  } else if (a <= 750000) {
    tax = a * 0.10;
  } else if (a <= 1000000) {
    tax = a * 0.15;
  } else if (a <= 1250000) {
    tax = a * 0.20;
  } else if (a <= 1500000) {
    tax = a * 0.25;
  } else {
    tax = a * 0.30;
  }

 
  printf("Your annual income is Rs. %d\n", a);
  printf("Your income tax payable is Rs. %c\n", tax);

  return 0;
}
