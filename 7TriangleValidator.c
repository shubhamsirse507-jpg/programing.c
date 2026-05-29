//7. Triangle Validator
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a+b > c && a+c >b && b+c > a)
    {
        printf("the sides form a triangle");
    }
    else 
    {
        printf("the sides do not form a triangle");
    }
    return 0;
}