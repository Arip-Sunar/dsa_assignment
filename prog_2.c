#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Stack operations
void push(char x) {
    stack[++top] = x;
}

char pop() {
    return stack[top--];
}

// Operator priority
int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

// Infix to Postfix conversion
void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    char x;

    push('(');
    while (infix[i] != '\0') {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }
        else if (infix[i] == '(') {
            push(infix[i]);
        }
        else if (infix[i] == ')') {
            while ((x = pop()) != '(') {
                postfix[j++] = x;
            }
        }
        else {
            while (priority(stack[top]) >= priority(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
        i++;
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

// Evaluate postfix expression
int evaluatePostfix(char postfix[]) {
    int stack2[MAX];
    int top2 = -1;
    int i, a, b;

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            stack2[++top2] = postfix[i] - '0';
        }
        else {
            b = stack2[top2--];
            a = stack2[top2--];

            switch (postfix[i]) {
                case '+': stack2[++top2] = a + b; break;
                case '-': stack2[++top2] = a - b; break;
                case '*': stack2[++top2] = a * b; break;
                case '/': stack2[++top2] = a / b; break;
            }
        }
    }
    return stack2[top2];
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression (single digit operands): ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    printf("Evaluation Result: %d\n", evaluatePostfix(postfix));

    return 0;
}
