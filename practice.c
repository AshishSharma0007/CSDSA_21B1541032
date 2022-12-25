#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,t;
    printf("Enter mat order:");
    scanf("%d%d",&m,&n);
    printf("Enter mat ele:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}