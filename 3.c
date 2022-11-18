#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input();
void display(struct Employee);
int main(){
    struct Employee e2;
    printf("Enter the name,id and salary of employee : ");
    e2=input();
    display(e2);
    return 0;
}
struct Employee input(){
    struct Employee emp;
    fgets(emp.name,20,stdin);
    emp.name[strlen(emp.name)-1]='\0';
    scanf("%d",&emp.id);
    scanf("%f",&emp.salary);
    return emp;
}
void display(struct Employee emp){
    printf("%s %d %.2f",emp.name,emp.id,emp.salary);
}
