#include<stdio.h>
void checkpalindrome(int n);
void main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    checkpalindrome(a);
}

void checkpalindrome(int n){
    int x,rem=0,rev=0;
    x=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==x){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }

}