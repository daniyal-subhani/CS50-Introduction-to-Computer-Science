#include <stdio.h>

int main()
{
    int num1 = 44;
    int *ptr = &num1;
    printf("Value address of num1: %p\n", *ptr);

    return 0;
}