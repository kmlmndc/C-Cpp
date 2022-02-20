#include<stdio.h>

int main(){
  int number1, number2;

  printf("Enter two number : \n");
  printf("This two number will be compared\n");
  scanf("%d%d", &number1, &number2 );

  if(number1 == number2)
    printf("%d is equal to %d\n", number1, number2);

  if(number1 != number2)
    printf("%d is not equal to %d\n", number1, number2);

  if(number1 < number2)
    printf("%d is less than %d\n", number1, number2);

  if(number1 > number2)
    printf("%d is bigger than %d\n", number1, number2);

  if(number1 <= number2)
    printf("%d is equal or less than %d\n", number1, number2);

  if(number1 >= number2)
    printf("%d is equal or bigger than %d\n", number1, number2);


  return 0;
}
