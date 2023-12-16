#include<stdio.h>
int main(){
    /*Developing a C-programming that takes small letter and convert to capital letter*/
    //Develop by->[PRANTO]
    char lower;
        printf("Input the small letter : ");
        scanf("%c",& lower);
    char upper;
        upper = (lower - 32);
            printf("The capital letter is : %c ", upper);
    return 0 ;
}