#include<stdio.h>
void reverse(int n);
void main(){
    int n;
    printf("enter a number u want to reverse");
    scanf("%d",&n);
    reverse(n);
}

void reverse(int n){
    int rem=0,rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("number after reversing is %d \n",rev);
}
