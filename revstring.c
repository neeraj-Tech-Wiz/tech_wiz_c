#include<stdio.h>
#include<string.h>
void main(){
    char str1[50],str2[50];
    int count,i,length;
    printf("Enter a string you want to get reverse\n");
    gets(str1);
    length=strlen(str1);
    count=0;
    for(i=length-1;i>=0;i--){
        str2[count]=str1[i];
        count++;
    }
    printf("Reverse string is\n");
    puts(str2);

}