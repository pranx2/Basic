#include<stdio.h>
#include<ctype.h>
int main(){
    /*Developing a C-programming that using libary function to converts capital letters to small letters*/
    //Develop by->[PRANTO]
    char upper;
        printf("Input the Capital letter : ");
        scanf("%c",&upper);
    char lower;
        lower =tolower(upper);
        printf("The small letter is : %c",lower);
    return 0;
}