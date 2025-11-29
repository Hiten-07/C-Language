#include<stdio.h>
int main(){
    float principal , rate , time , simpleInterest;

    printf("enter the principal amount :");
    scanf("%f",&principal);

    printf("enter the rate of interest (in percentage) :");
    scanf("%f",&rate);

    printf("enter the time :");
    scanf("%f",&time);

    simpleInterest = (principal * rate * time) / 100;

    printf("the simple interest is : %f\n",simpleInterest);

    return 0;
}