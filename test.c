#include<stdio.h>

int main() {
    int* a = &(int){0};
    int* b = (int *){3, 2, 1};
    int* c = {1,2};
    printf("a=%x\t&a=%x\t*a=%x\n", a, &a, *a);
    printf("b=%x\t&b=%x\n", b, &b);
    printf("c=%x\t&c=%x",c, &c);
    return 0;
}