#include <stdio.h>

int main() {
    int newArr[5] = {1, 2, 3, 4, 5};
  
    for (int i = 0; i < sizeof(newArr) / sizeof(newArr[0]); i++)
    {
        /* code */
        printf("Element %d\n ", newArr[i]);
    }
    

    return 0;
}