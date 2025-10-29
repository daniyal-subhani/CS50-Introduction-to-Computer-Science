#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    printf("Random numbers: %d, %d\n", num1, num2);
    return 0;
}