#include <stdio.h>
void main()
{
    int a, b, i, j;
    printf("enter the two input");
    scanf("%d%d", &a, &b);
    printf("OUTPUT USING AND GATE");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t%d", i, j);
            printf("\t%d", i && j);
            printf("\n");
        }
    }
    printf("OUTPUT USING OR GATE");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t%d", i, j);
            printf("\t%d", i || j);
            printf("\n");
        }
    }
    printf("OUTPUT OF NOT GATE");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d\t%d", i, !i);
        printf("\n");
    }
}