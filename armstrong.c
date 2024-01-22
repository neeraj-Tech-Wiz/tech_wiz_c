#include<stdio.h>
void checkarmstrong(int n);
void main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    checkarmstrong(n);
}
void checkarmstrong(int n){
    int rev=0,rem=0,temp;
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
    }
    if (temp==rev){
        printf("Number is armstrong number");
    }
    else{
        printf("Number is not armstrong number");
    }

    
}