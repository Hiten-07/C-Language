/*
WRITE A PROGRAM TO CHECK IF A STUDENT PASSED OR FAILED
        MARKS>30 IS PASS
        MARKS<30 IS FAIL
*/
#include<stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) :");
    scanf("%d",&marks);
    if (marks<=30)
    {
        printf("fail\n");
    }

    else
    {
        printf("pass\n");
    }

    return 0;
    
}