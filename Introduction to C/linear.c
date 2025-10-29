#include <stdio.h>

int main()
{
    int numbers[] = {20, 500, 10, 100, 60, 350, 5};
    for (int i = 0, l = sizeof(numbers) / sizeof(numbers[0]); i < l; i++)
    {
        /* code */
        if (numbers[i] > 100)
        {
            /* code */
            printf("Number greater than 100 found: %d\n", numbers[i]);
        }
        else if (numbers[i] < 100)
        {
            /* code */
            printf("Number less than 100 found: %d\n", numbers[i]);
        }
        else
        {
            printf("Number equal to 100 found: %d\n", numbers[i]);
        }
    }

    return 0;
}