#include<stdio.h>
void fibonacci(int n);
void main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    fibonacci(n);
}

void fibonacci(int n){
    int fib1=0,fib2=0,fib3=0;
    for(int i=2;i<n;i++){
        fib3=fib1 + fib2;
        printf("fib series = %d",fib3);
        fib1-fib2;
        fib2=fib3;
    }

}