#include<stdio.h>

int dec(int n){
if(n==1){
    return 1;
}
else{
return dec(n-1);
}
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n", dec(n));

    return 0;
}