#include <stdio.h>

int main() {
    int x = 10;
    int y = 10;

    if (x>y) 
    {
        /* code */
        printf("x is greater than y\n");
    } else if(x<y) {
        printf("x is less than  y\n");
    } else if (x==y) {
        printf("x is equal to y\n");
    }
    
    return 0;
}