#include <stdio.h>

int main() {
    int n;
    do
    {
        /* code */
        printf("Type a number: ");
        scanf("%d", &n);
        printf("You entered: %d\n", n);

    } while (n > 1);

    return 0;
}