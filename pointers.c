#include<stdio.h>
// LECTURE 18 
int *getarray(int *a)
{
    printf("Enter the elements in an array:");
    for(int i=0;i<5;i++)
        scanf("%d", &a[i]);
    return a;
}
int main()
{
    int *n,a[5];
    n=getarray(a);
    printf("\nElements of array are :");
    for(int i=0;i<5;i++){
      printf("%d", n[i]);  
    }
    return 0;
}