#include <stdio.h>

int main()
{
    int time;
    printf("GREETING SYSTEMS\n");
    scanf("Time is i%: , &time");
    if (time >= 7)
        printf("GREETING is: Good Morning\n");
    else if (time <= 12)
        printf("GREETING is: Good Afternoon\n");
    else
        printf("GREETING is: Good Evening\n");
    return 0;
}