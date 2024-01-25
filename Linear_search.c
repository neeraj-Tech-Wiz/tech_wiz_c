#include<stdio.h>
void main(){
    int a[40],n,flag=0,search=0,i;
    int *ptr;
    ptr = &a[0];

printf("Enter how many no want in array ");
scanf("%d",&n);
printf("Enter numbers of array :");
for(i=0;i<n;i++){
printf("%d ",i);
scanf("%d",ptr+i);
}
printf("Enter the number you want to search ");
scanf("%d",&search);
for(i=0;i<n;i++){
    if(*ptr==search){
        flag=1;
        break;
    }
    ptr++;
}
if (flag==1){
    printf("Number is present at %d position",i);
}
else{
    printf("Number is not present");
}
}