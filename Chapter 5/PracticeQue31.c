/*
WRITE A FUNCTION THAT PRINTS "NAMASTE" IF USER IS INDIAN & "BONJOUR" IF THE USER IS FRENCH 
*/
#include<stdio.h>
//declaration / prototype
void Namaste();
void Bonjour();

int main() {
    printf("enter f for french & i for indian :");
    char ch;
    scanf("%c",&ch);

    if (ch=='i')
    {
        Namaste();
    }

    else
    {
        Bonjour();
    }
    
    return 0;
    
    void Namaste() {
        printf("namaste\n");
    }

    void Bonjour() {
        printf("bonjour\n");
    }
}

