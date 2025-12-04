#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age; //address
    printf("%p\n",&age);
    printf("%a\n",&age);
    return 0;
}