// addition of a 2 by 2 matrix
#include<stdio.h>
void main(){
    int a[2][2],b[2][2],c[2][2];
    int i,j; 
    printf("enter value of matrix A\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value of matrix B\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of matrix is\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\n",c[i][j]);
        }
    }

}