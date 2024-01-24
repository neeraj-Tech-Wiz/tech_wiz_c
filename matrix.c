#include<stdio.h>
void arraysearch (int a[10], int search);
void add(int x, int y);
void sub(int x,int y);
void multiplication(int x ,int y);
void div(int x ,int y);

void main(){
    int a[10],i,search,x,y;
    printf("enter numbers of array");
    for(i=0;i<10;i++){
        printf("no. %d\t",i);
        scanf("%d",&a[i]);
    }
    printf("enter the number u want to search");
    scanf("%d",&search);
    printf("enter 2 no.s");
    scanf("%d %d",&x,&y);
    arraysearch(a,search);
    add(x,y);
    sub(x,y);
    multiplication(x,y);
    div(x,y);
}
void arraysearch (int a[10], int search){
    int flag =0,i=0;
    for(i=0;i<10;i++){
        if(a[i]==search){
            flag=1;
            break;
        }
    }
    if(flag==1){
            printf("number %d present at %d position",search,i);
        }
        else{
            printf("number is not present");
        }
}
void add(int x, int y){
   int addtion = 0;
   addtion = x+y;
   printf("\naddition of numbers is %d",addtion);
}
void sub(int x,int y){
    int sub=0;
    sub=x-y;
    printf("\nsubstraction of number is %d",sub);
}
void multiplication(int x ,int y){
    int mul=0;
    mul=x*y;
    printf("\nmultiplication of numbers is %d",mul);
}
void div(int x ,int y){
    float div;
    div = x/y;
    printf("\ndivision of numbers is %f",div);
}