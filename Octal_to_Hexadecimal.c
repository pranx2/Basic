#include<stdio.h>
int main (){
    /*Developing a C-programming that converts octal to hexadecimals*/
    //Develop by->[PRANTO]
    int octal_number;
        printf("Input the octal number (0-7): ");
            scanf("%o", & octal_number);
                printf("The hexadecimal number is : %x",octal_number);
    return 0;
}