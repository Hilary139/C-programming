#include <stdio.h>

int main()
{
    printf(" Grading system\n");

    int score;
    printf("Enter your score\n");
    scanf("%i", &score);

    if (score >= 70 && score <= 100)
    {
        printf("A\n");
    }
    else if (score >= 60 && score <= 69)
    {
        printf("B\n");
    }
    else if (score >= 59 && score <= 50)
    {
        printf("C\n");
    }
    else if (score >= 49 && score <= 45)
    {
        printf("D\n");
    }
    else if (score >= 44 && score <= 40)
    {
        printf("F\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}