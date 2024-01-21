#include<stdio.h>
void checkeven(int n);
void main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    checkeven(n);
}

void checkeven(int n){
    if (n%2==0)
    {
      printf("Number is even number");
    }
    else{
        printf("Number is not even number");
    }
    
}