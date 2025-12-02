/*
PRINT THE TABLE OF A NUMBER INPUT BY THE USER
N=2
*/

#include<stdio.h>
int main() {
    int n;
    printf("enter number :");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",n*i);
    }
    
    return 0;
}