// using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

 void main(){
    int *ptr,i,n,sum;
    float avg;
    printf("Enter how many number u want\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",ptr + i);
    }

    for(i=0;i<n;i++){
       sum = sum + *(ptr + i);
       
    }
    avg = sum/n;
    printf("Average of numbers is %f",avg);
    free(ptr);
}