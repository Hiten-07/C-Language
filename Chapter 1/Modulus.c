#include<stdio.h>
int main() {
    int num1,num2,remainder;

    printf("enter the first nuumber :");
    scanf("%d",&num1);

    printf("enter the second number :");
    scanf("%d",&num2);

    remainder = num1 % num2;

    printf("the remainder when %d is devided by %d is : %d\n",num1, num2, remainder);

    return 0;
}
