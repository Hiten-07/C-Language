/*
WRITE A PROGRAM TO GIVE GRADES TO A STUDENT 
            MARKS<30 IS C
            30 <= MARKS <70 IS B
            70 <= MARKS <90 IS A 
            90 <= MARKS <100 IS A+
*/

#include<stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) :");
    scanf("%d",&marks);
    if (marks<30)
    {
        printf("c\n");
    }

    else if (marks >= 30 && marks <70)
    {
        printf("b\n");
    }

    else if (marks >= 70 && marks <90)
    {
        printf("a\n");
    }

    else {

        printf("a++\n");
    }

    return 0;

}