#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,average;

    printf("enter first number :");
    scanf("%f",&a);

    printf("enter second number :");
    scanf("%f",&b);

    printf("enter third number :");
    scanf("%f",&c);

    average = (a + b + c) / 3;

    printf("the average is : %f\n",a,b,c,average);

    return 0;
}