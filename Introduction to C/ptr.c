#include <stdio.h>

int main() {
    int age = 50;
    int *ptr = &age;
    int _age = *ptr;
    printf("Age: %d\n", _age);
    return 0;
}