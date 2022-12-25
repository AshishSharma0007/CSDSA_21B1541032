#include<stdio.h>
void main(){
    int i,j,a[2][2],b[1];
    printf("AND Gate Result:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            a[i][j] = (i && j);
            printf("%d\t%d\t%d\n",i,j,a[i][j]);
        }
    }
    printf("OR Gate Result:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            a[i][j] = (i || j);
            printf("%d\t%d\t%d\n",i,j,a[i][j]);
        }
    }
    printf("NOT Gate Result:\n");
    for (i = 0; i <= 1; i++)
    {
            b[i] = (!i);
            printf("%d\t%d\n",i,b[i]);
    }
}