/*
if a number is grater than 9 and less than 100 -> true (2 digit number)
*/
#include<stdio.h>
int main() {
int x;
printf("enter a number :");
scanf("%d",&x);
printf("%d\n",x>9 && x<100);
return 0;
}