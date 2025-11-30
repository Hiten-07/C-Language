/*
write a program to check if a number is odd or even
*/
#include<stdio.h>
int main() {
    int i;
    printf("enter a number :");
    scanf("%d",&i);
    printf("answer is : %d\n",i%2==0);
    return 0;
}