#include<stdio.h>

int main(){
  int number1, number2, sum;

  printf("Enter first number : ");
  scanf("%d", &number1 );
  printf("Enter second number : ");
  scanf("%d", &number2 );
  sum = number1 + number2;
  printf("sum of the entered number is %d\n", sum );

  return 0;
}
