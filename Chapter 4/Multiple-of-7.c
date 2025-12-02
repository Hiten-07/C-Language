/*
KEEP TAKING NUMBER'S AS INPUT FROM USER UNTILL USER ENTERS A NUMBER WHICH USER ENTERS A NUMBER WHICH IS MULTIPLE OF  7
*/
#include<stdio.h>
int main() {
    int n;
    do
    {
        printf("enter number :");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n%7 == 0)
        {
            break;
        }
        
    } while (1);
    printf("thank you\n");
    return 0;
}