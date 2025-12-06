//linear search for string in an array
#include<stdio.h>
int main()
{
    int arr[100],key,i,flage=0;
    char string;
    printf("Enter number of strings in array:");
    scanf("%c",&string);
    printf("Enter %c strings:\n",string);
    for(i=0;i<string;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("ENter string to be searched:");
    scanf("%c",key);

    for(i=0;i<string;i++)
    {
        if(arr[i]==key)
        {
            printf("string found at position %d\n",i,key);
            flage=1;
            break;
        }
    }
    if(flage==0)
    {
        printf("string is not found in array\n",i,key);
    }
    return 0;
}