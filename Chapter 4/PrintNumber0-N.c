/*
PRINT THE NUMBERS FROM 0 TO N , IF N IS GIVEN BY USER
                    n=4
*/

#include<stdio.h>
int main() {
    int n;
    printf("enter the number :");
    scanf("%d\n",&n);
    int i = 0;
    while (i <= n)
    {
        printf("%d\n",i);
        i++;
        return 0;
    }
    
}