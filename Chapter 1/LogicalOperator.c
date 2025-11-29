#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 15;
    printf("(a > b) && (a < c) : %d\n", (a > b) && (a < c));
    printf("(a > b) || (a > c) : %d\n", (a > b) || (a > c));
    printf("!(a > b): %d\n", !(a > b));
    return 0;
}
