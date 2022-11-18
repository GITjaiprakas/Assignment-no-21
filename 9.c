#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
    float percentage;
};
void output(struct Student [],int );
int main(){
    int n;
    printf("Enter the no of students to store their information ");
    scanf("%d",&n);
    struct Student x[n];
    for(int i=0;i<n;i++){
        printf("Enter the details of student's name,roll no and percentage of student %d\n",i+1);
        scanf("%d",&x[i].rollno);
        fflush(stdin);
        fgets(x[i].name,20,stdin);
        x[i].name[strlen(x[i].name)-1]='\0';
        scanf("%f",&x[i].percentage);
    }
    output(x,n);
    return 0;
}
void output(struct Student x[],int n){
    for(int i=0;i<n;i++){
        printf("name of the student : %s roll no : %d percentage : %.2f\n",x[i].name,x[i].rollno,x[i].percentage);
    }
}
