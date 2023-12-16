#include<stdio.h>
#include<ctype.h>
int main(){
    /*Developing a C-programming that takes small letter and using libary function to convert into capital letter*/
    //Develop by->[PRANTO]
    char lower;
        printf("Input the small letter : ");
        scanf("%c", & lower);
    char upper;
        upper = toupper(lower);
        printf("The capital letter is : %c", upper );
    return 0;
}