//created by tomari on sep 4 2022
#include <stdio.h>

int age(int i){

    return 2022 - i;
   
}

int main()
{
    char name [30];
    
    int bd = 0;
    char ch;
    int* bdptr;
    printf("Enter Your Name(no spaces) : ");
    scanf("%s",&name);
    printf("Enter Your birth year : ");
    scanf("%d",&bd);
    bdptr = &bd;
    
    printf("Your name is %s and you are %d years old",name,age(*bdptr));


    return 0;
}
