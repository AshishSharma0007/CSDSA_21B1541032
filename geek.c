#include <stdio.h>
void main()
{
    int a[100],n,i,max;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The candles will left till: %d days." , max);
}
    

