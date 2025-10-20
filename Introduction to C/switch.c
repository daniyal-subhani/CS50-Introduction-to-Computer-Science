#include <stdio.h>

int main()
{
    int x = 55;
    float y = 5.5;
    int cmp;

     if (x > y) {
        cmp = 1;
    } else if (x < y) {
        cmp = -1;
    } else {
        cmp = 0;
    }

    switch (cmp)
    {
    case 1:
        printf("x is greater than y\n");
        break;
    case -1:
        printf("x is less than y\n");
        break;
    case 0:
        printf("x is equal to y\n");
        break;

    default:
        break;
    }

    return 0;
}