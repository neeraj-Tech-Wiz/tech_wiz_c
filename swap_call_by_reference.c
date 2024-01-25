#include<stdio.h>
void swap(int*a,int*b);
void main (){
int a,b;
printf("Enter any 2 values ");
scanf("%d %d",&a,&b);

swap(&a,&b);
}

void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("values of swapping are : %d %d",*a,*b);
}