// Electricity Bill Generator 
#include<stdio.h>

int main()
{
    int units;
    float bill = 0.0f;
    float gst;
    float total;

    printf("Enter units used: ");
    scanf("%d", &units);

    if(units <= 100)
    {
        bill = units * 5.0f;
    }
    else if(units <= 200)
    {
        bill = 100 * 5.0f + (units - 100) * 7.0f;
    }
    else
    {
        bill = 100 * 5.0f + 100 * 7.0f + (units - 200) * 9.0f; // student mistake: last slab should be 10/unit
    }

    gst = bill * 0.18f;
    total = bill + gst;

    printf("Base amount: %.2f\n", bill);
    printf("GST 18%%: %.2f\n", gst);
    printf("Total to pay: %.2f\n", total);
    return 0;
}
//o/p Enter the no of Units consumed:150
//Base amount: 850.00
//GST 18%: 153.00
//Total to pay: 1003.00
