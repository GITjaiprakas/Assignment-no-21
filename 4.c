#include<stdio.h>
#include<string.h>
struct Employee{
    int eid;
    char ename[30];
    float esal;
};
void salary(struct Employee []);
int main(){
    int i;
    struct Employee e[10];
    for(i=0;i<10;i++){
        printf("Enter the id,name and salary of the employee %d\n",i+1);
        scanf("%d",&e[i].eid);
        fflush(stdin);
        fgets(e[i].ename,30,stdin);
        e[i].ename[strlen(e[i].ename)-1]='\0';
        scanf("%f",&e[i].esal);
    }
    salary(e);
    return 0; 
}
void salary(struct Employee e1[]){
    int i,store;
    int highest = e1[0].esal;
    for(i=1;i<10;i++){
        if(highest<e1[i].esal){
            highest=e1[i].esal;
            store=i;
        }
    }
    printf("employee name = %s id = %d with highest salary = %.2f", e1[store].ename,e1[store].eid,e1[store].esal);
}
