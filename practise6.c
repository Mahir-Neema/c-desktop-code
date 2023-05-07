#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    char email[20];
    float marks;
};
int main(){
    struct  student st={"Ram", "ram.iitrpr.ac.in", 68.00};
    printf("Name\t\t\tEmail\t\t\tMarks");
    printf("\n\n %s\t\t %s\t\t %f\n\n\n", st.name, st.email, st.marks);
    return 0;
}