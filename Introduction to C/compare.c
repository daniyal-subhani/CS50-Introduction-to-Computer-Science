#include <stdio.h>

int main() {
    int num1 = 144;
    int num2 = 555;
    int num3 = 666;
   
    if (num1 > num2 && num1 > num3) {
        printf("num1 is the largest: %d\n", num1);
    } else if (num2 > num1 && num2 > num3)
    {
        printf("num2 is the largest: %d\n", num2);
    } else {
        printf("num3 is the largest: %d\n", num3);
    }
    
    
    
    return 0;
}