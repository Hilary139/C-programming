#include <stdio.h>

int main()
{
    double i, num;
    double product = 1;

    for (i = 1; i <= 4; i++)
    {
        printf("Enter num:");
        scanf("%lf", &num);

        if (num == 0)
        {
            continue;
        }

        product *= num;
    }
    printf("Product = %f\n", product);
    return 0;
}