#include<stdio.h>
#include<string.h>
struct result{
    int rno;
    char name[20];
    int m1,m2,m3;
    float per;
}r[100];
void main(){
    int n,sum,i;
    printf("enter how many stu\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter roll no\n");
        scanf("%d",&r[i].rno);
        printf("enter name\n");
        scanf("%s",r[i].name);
        printf("enter marks\n");
        scanf("%d %d %d",&r[i].m1,&r[i].m2,&r[i].m3);
        sum=r[i].m1+r[i].m2+r[i].m3;
        r[i].per=sum/3;
    }

    printf("result of students are\n");
    for(i=0;i<n;i++){
        printf("roll no=%d\n",r[i].rno);
        printf("name is %s\n",r[i].name);
        printf("percentage=%f\n",r[i].per);
    }
}