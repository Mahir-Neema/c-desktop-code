# include <stdio.h>
int discard(int year,int weight,int cost){
    if(year<2010){
        return 0;
    }
    if(weight>20 && weight<40){
        return 0;
    }
    if(weight>40 && cost<1000){
        return 0;
    }
    return 1;
}

void main(){
    int year;
    int weight;
    int cost;
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter weight:");
    scanf("%d",&weight);
    printf("Enter cost:");
    scanf("%d",&cost);

    discard(year,weight,cost);
}