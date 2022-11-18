#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
    float chem_marks;
    float phy_marks;
    float maths_marks;
};
void output(struct Student [],int );
int main(){
    struct Student x[5];
    for(int i=0;i<5;i++){
        printf("Enter the details of student's name,roll no, marks of physics ,marks of chemistry and marks of maths %d\n",i+1);
        scanf("%d",&x[i].rollno);
        fflush(stdin);
        fgets(x[i].name,20,stdin);
        x[i].name[strlen(x[i].name)-1]='\0';
        scanf("%f",&x[i].chem_marks);
        scanf("%f",&x[i].phy_marks);
        scanf("%f",&x[i].maths_marks);
    }
    output(x,5);
    return 0;
}
void output(struct Student x[],int n){
    for(int i=0;i<n;i++){
        printf("name of the student : %s roll no : %d marks in maths : %.2f marks in physics : %.2f marks in chemistry : %.2f percentage=%.2f\n",x[i].name,x[i].rollno,x[i].maths_marks,x[i].phy_marks,x[i].chem_marks,((x[i].maths_marks+x[i].phy_marks+x[i].chem_marks)/300)*100);
    }
}
