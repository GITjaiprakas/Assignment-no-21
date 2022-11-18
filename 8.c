#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
    float percentage;
};
void output(struct Student x[]);
int main(){
    struct Student x[10];
    for(int i=0;i<10;i++){
        printf("Enter the details of student's name,roll no and percentage of student %d\n",i+1);
        fgets(x[i].name,20,stdin);
        x[i].name[strlen(x[i].name)-1]='\0';
        scanf("%d",&x[i].rollno);
        scanf("%f",&x[i].percentage);
        fflush(stdin);
    }
    output(x);
    return 0;
}
void output(struct Student x[]){
    for(int i=0;i<10;i++){
        printf("name of the student : %s roll no : %d percentage : %.2f\n",x[i].name,x[i].rollno,x[i].percentage);
    }
}
