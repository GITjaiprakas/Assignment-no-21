#include<stdio.h>
#include<string.h>
struct Employee{
    int eid;
    char ename[30];
    float esal;
};
void salary(struct Employee []);
void swap(struct Employee [],int ,int );
void display(struct Employee []);
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
    display(e);
    return 0; 
}
void display(struct Employee e[]){
    int i,j;
    for(i=0;i<10;i++){
        printf("%s %.2f %d\n",e[i].ename,e[i].esal,e[i].eid);
    }
}
void salary(struct Employee e1[]){
    int i,j,store;
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++)
        if(e1[j].esal>e1[i].esal){
            swap(e1,i,j);
        }
    }
}
void swap(struct Employee e1[],int i,int j){
    float temp;
    temp=e1[i].esal;
    e1[i].esal=e1[j].esal;
    e1[j].esal=temp;
}
