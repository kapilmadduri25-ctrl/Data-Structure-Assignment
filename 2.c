#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push operation
void push(char ch) {
    stack[++top] = ch;
}

// Pop operation
void pop() {
    top--;
}

int main() {
    char exp[100];
    int i, flag = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; i < strlen(exp); i++) {
        if(exp[i] == '(') {
            push(exp[i]);
        }
        else if(exp[i] == ')') {
            if(top == -1) {
                flag = 0;
                break;
            }
            pop();
        }
    }

    // If stack not empty
    if(top != -1)
        flag = 0;

    if(flag == 1)
        printf("Balanced Expression\n");
    else
        printf("Not Balanced\n");

    return 0;
}