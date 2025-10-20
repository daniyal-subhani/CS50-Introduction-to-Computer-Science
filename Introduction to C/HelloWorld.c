#include <stdio.h> // Standard input-output header file
#include <string.h>

int main(void)
{
    char answer[100];
    printf("What is ur name? ");
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = '\0';
    printf("Hello, %s!\n", answer);
    return 0;
}