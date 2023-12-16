#include<stdio.h>
int main(){
    /*Developing a C-programming that takes ASCII numbers and converts into character*/
    //Code by->[PRANTO]
    int digit;
        printf("Input the ASCII number,");
        printf("value must be (0-128) : ");
        scanf("%d", & digit);
        printf("The ASCII number of  %d is [ %c ] character.",digit,digit);
    return 0;
    
}