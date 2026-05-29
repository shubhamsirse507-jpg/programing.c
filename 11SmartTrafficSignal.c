#include<stdio.h>
int main()
{
    int Speed ;
    printf("Enter the Speed of vehical: ");
    scanf("%d", &Speed);
    if (Speed < 40)
    {
        printf("safe speed");
    }
    else if (Speed >= 40 && Speed <=80)
    {
        printf("normal speed");
    }
    else if (Speed > 81 && Speed <= 120)
    {
        printf("warning Speed");
    }
    else if (Speed > 120)
    {
        printf("your licence is suspended");
    }
    else
    {
        printf("drive Safely");
    }
    return 0;
}
/* o/p
Enter the Speed of vehical: 90
warning Speed
*/