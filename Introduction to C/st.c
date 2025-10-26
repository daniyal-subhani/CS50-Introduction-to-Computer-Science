#include <stdio.h>
#include <string.h>

int main() {
    int size = 50;
    char name[size];
    printf("Enter your name: ");
    fgets(name, size, stdin);
if(name) {
    printf("Hello, %s", name);
} else {
    printf("Error reading input.\n");
}
    return 0;
}