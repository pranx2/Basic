#include<stdio.h>
int main(){

//Problem-Swap->code by PRANTO;
    int x,y,z;
    printf("Input the first data value  : ");
    scanf("%d",&x);
    printf("Input the second data value : ");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("The swap value is : %d %d",x,y);
    return 0;
}