#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int temp; 

    temp = x;
    x = y;
    y = temp;

    printf("After swapping x becomes: %d, and  y becomes: %d\n", x, y);
    return 0;
}