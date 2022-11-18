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
    struct Employee e[10]={{32504,"jaiprakas",50000000.34},{32333,"kumar akshay",46400000.34},{32546,"rahul",50000000.353},{32564,"amar",46600035.34},{37389,"husain",89454},{31243,"prateek",40034.45},{32344,"jaishankar",4500034.343},{32454,"samdar",50004},{38354,"kranti",460034.34},{12504,"akash",500000.14}};
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
        if(strcmp(e1[j].ename,e1[i].ename)<0){
            swap(e1,i,j);
        }
    }
}
void swap(struct Employee e1[],int i,int j){
    struct Employee temp;
    temp=e1[i];
    e1[i]=e1[j];
    e1[j]=temp;
}
