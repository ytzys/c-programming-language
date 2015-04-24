#include<stdio.h>

int main() {
    int* a = &(int){0};
    int b = (int *){3, 2, 1};
    printf("a=%x\t&a=%x\t*a=%x\n", a, &a, *a);
    printf("b=%x\t&b=%x", b, &b);
    return 0;
}