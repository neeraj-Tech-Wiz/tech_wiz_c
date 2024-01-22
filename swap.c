#include<stdio.h>
void swap(int a,int b);
void main(){
    int x,y;
    printf("Enter any two number to swap");
    scanf("%d %d",&x,&y);
    swap(x,y);
    
}

void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    
    printf("swaped number is %d %d",a,b);
 
}