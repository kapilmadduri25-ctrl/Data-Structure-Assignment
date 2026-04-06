#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push operation
void push(char ch) {
    top++;
    stack[top] = ch;
}

// Pop operation
char pop() {
    return stack[top--];
}

int main() {
    char str[100], rev[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters into stack
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop characters to reverse string
    for(i = 0; i < strlen(str); i++) {
        rev[i] = pop();
    }

    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}