#include<stdio.h>
#include<string.h>
struct Employee input();
struct Employee{
    int id;
    char name[20];
    float salary;
};
int main(){ 
    struct Employee e; 
    e=input();
    return 0;
}
struct Employee input(){
    struct Employee emp;
    scanf("%d",&emp.id);
    fflush(stdin);
    fgets(emp.name,20,stdin);
    emp.name[strlen(emp.name)-1]='\0';
    scanf("%f",&emp.salary);
    return emp;
}
