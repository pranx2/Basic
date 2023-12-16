#include<stdio.h>
int main (){
    /*Developing a C-programming that input capital letter and converts into small letter*/
    //Develop by->[PRANTO]
    char upper;
        printf("Input the capital letter : ");
        scanf("%c", & upper);
    char lower;
        lower = upper + 32;
        printf("The small letter is : %c",lower);
    return 0;
}