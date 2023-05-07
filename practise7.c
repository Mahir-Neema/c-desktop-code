#include<stdlib.h>
int main(){
    char temp[40],**names;
    int i,n;
    scanf("%d",&n);
    names=(char**)malloc(n*sizeof(char*));
    for ( i = 0; i < n; i++)
    {
        scanf("%s",temp);
        names[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));
        strcpy(names[i],temp);
    }

    for(i=0;i<n;i++)printf("names[%d]=%s\n",i,names[i]);
    return 0;
     }