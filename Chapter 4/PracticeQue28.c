/*
CALCULATE THE SUM OF ALL THE NUMBERS BETWEEN 5 TO 50 (INCLUDING 5 AND 50)
*/
#include<stdio.h>
int main() {
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("sum is : %d\n",sum);
    return 0;
    
}