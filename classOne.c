#include <stdio.h>

int main()
{
    const int x = 50;
    const int y = 20;

    printf("Addition Arithmetic\n");
    int sum = x + y;
    printf("The addition is: %d\n", sum);

    printf("difference Arithmetic\n");
    int diff = x - y;
    printf("The difference is: %d\n", diff);

    printf("product Arithmetic\n");
    int pro = x * y;
    printf("The multiplication is: %d\n", pro);

    printf("division Arithmetic\n");
    int divi = x / y;
    printf("The division is: %d\n", divi);

    printf("modulus Arithmetic\n");
    int mod = x % y;
    printf("The addition is: %d\n", mod);

    printf("My answers are: \n", sum, diff, pro, divi, mod);
    return 0;
}