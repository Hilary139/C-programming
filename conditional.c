#include <stdio.h>
int main()
{
    int age;
    printf("Age verification\n");
    printf("Enter your age: \n");
    scanf("%i", &age);

    if (age < 18)
    {
        printf("YOU ARE TOO Young\n");
    }
    else if (age >= 18 && age <= 30)

    {
        printf("YOU ARE OF AGE \n");
    }
    else
    {
        printf("YOU ARE TOO OLD \n");
    }
    return 0;
}
