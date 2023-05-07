#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true  1
#define false 0

void swap(int* a,int i,int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
}

void bubblesort(int* v,int n){
    for(int i=0;i<n-1;i++){
        bool isSwapped = false;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]) {swap(v,j,j+1); isSwapped=true;}
        }
        if(!isSwapped) break;
    }
}
    
   

int main() {
    int n;
    scanf("%d",n);
    int v[n];
    for(int i=0;i<n;i++){
        v[i] = rand()%5;
        printf("%f",v[i]);
        printf(" ");
    }

    printf("\n");
    bubblesort(v,n);

    for(int i=0;i<n;i++){
         printf("%f",v[i]);
        printf(" ");
    }
    printf("\n");
  return 0;
}