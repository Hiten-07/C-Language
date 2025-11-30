/*
solve this:
a) 5*2 - 2*3
b) 5*2 / 2*3
c) 5*(2/2)*3
d) 5+2 / 2*3
*/
#include<stdio.h>
int main() {
    int a = (5*2 - 2*3);
    int b = (5*2 / 2*3);
    int c = (5*(2/2)*3);
    int d = (5+2 / 2*3);
    
    printf("a is : %d\n",a);
    printf("b is :%d\n",b);
    printf("c is :%d\n",c);
    printf("d is :%d\n",d);

    return 0;
}