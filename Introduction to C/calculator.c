#include <stdio.h>

int main() {
    char op;
    printf("Enter a operator (+, -, *, /): ");
    scanf("%c", &op);
    int a, b;
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    switch (op)
    {
    case '+':
        /* code */
        printf("The result is %d \n", a + b);
        break;
    case '-':
        /* code */
        printf("The result is %d \n", a - b);
        break;
    case '/':
        /* code */
        printf("The result is %d \n", a / b);
        break;
    case '*':
        /* code */
        printf("The result is %d \n", a * b);
        break;
    
    default:
    printf("Invalid operation\n");
        break;
    }
    return 0;
}