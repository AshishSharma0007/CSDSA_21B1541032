#include <stdio.h>
int main(){
    int n,a[100],t,i,j;
    printf("Enter no of elements of array:");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }   
        }
    }
    printf("Sorted array:\n");
    for ( i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
}