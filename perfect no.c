#include<stdio.h>
void checkperfect(int n);
void main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    checkperfect(n);
}

void checkperfect(int n){
    int sum=0,i=1;
    while (i<n)
    {
     if(n%i==0){
        sum=sum+i;
     }
     i=i+1;
    }
    if(sum==n){
        printf("Number is a perfect number");
    }
    else{
        printf("the number is not perfect number");
    
    }
        
    
        
}