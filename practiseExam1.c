#include<stdio.h>

void deceasingorder (int N){
    for(int i=N;i>0;i--){
    printf("&d",i);
    }
    
}
    int main(){
        int N;
        scanf("&d",&N);
        deceasingorder(N);
        return 0;
    }

