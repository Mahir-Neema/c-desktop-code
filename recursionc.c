#include<stdio.h>

int factorial(int x)
{
    if(x == 1)
        return 1;
    else 
        return x*factorial(x-1);
}
void main()
{
    int a, b;
    // finding factorial

    printf("Enter a number: ");
    scanf("%d",&a);
    b=factorial(a);
    printf("%d",b);
}