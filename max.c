// using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr,n,i,max;
    printf("Enter how many number u want in\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",ptr +i);
    }
    max=*ptr;
    for(i=1;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    printf("Maximum number is %d",max);
    free(ptr);
}