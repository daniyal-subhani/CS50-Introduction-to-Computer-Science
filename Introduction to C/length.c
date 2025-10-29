#include <stdio.h>
#include <string.h>

int main() {
    int size = 50;
    char name[size];
    printf("Enter something: ");
    fgets(name, size, stdin);
    if(name) {
        for (int i = 0, l = strlen(name);i < l; i++)
        {
            /* code */
            printf("%c", name[i]);
        }
    } else {
        printf("Input error\n");
    }
    return 0;
}