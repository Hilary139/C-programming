// integer and double casting
#include <stdio.h>

int main()
{
  int number;
  int length = 2;

  printf("Please enter a number: ");
  scanf("%i", &number);

  // printf("Please Enter length: ");
  // scanf("%i\n", &length);

  int total = number + length;

  printf("The total is: %i\n", total);
  return 0;
}
