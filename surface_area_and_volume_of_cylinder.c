#include<stdio.h>
int main() {
    int r,h;
    float s_area,volume,pi=3.14;
    printf("enter the radius and height of cylinder\n");
    scanf("%d%d",&r,&h);
    s_area=2*pi*r*(r+h);
    volume=pi*h*r*r;
    printf("surface area and volume of cylinder is: %f and %f respectively\n",s_area,volume);

}