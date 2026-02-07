#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push a character onto the stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = c;
    }
}

// Pop a character from the stack
char pop() {
    if (top == -1) {
        return '\0'; // stack empty
    } else {
        return stack[top--];
    }
}

// Check if opening and closing parentheses match
int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

// Function to check if expression has balanced parentheses
int isBalanced(char expr[]) {
    top = -1; // reset stack
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1 || !isMatching(pop(), ch)) {
                return 0; // Not balanced
            }
        }
    }
    return top == -1; // balanced if stack empty
}

int main() {
    char expr[100];
    printf("Enter expression: ");
    fgets(expr, sizeof(expr), stdin);
    expr[strcspn(expr, "\n")] = 0; // remove newline

    if (isBalanced(expr)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }

    return 0;
}
