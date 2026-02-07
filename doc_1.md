# Documentation for Question 1: Balanced Parentheses Checker

## Data Structures
- `stack[MAX]`: Array used to store opening parentheses while checking balance.
- `top`: Integer to keep track of the top of the stack.
- `expr[]`: Character array to store the input expression from the user.

## Functions
- `void push(char c)`:
    - Adds a character `c` to the top of the stack.
- `char pop()`:
    - Removes and returns the top character from the stack.
    - Returns '\0' if stack is empty.
- `int isMatching(char open, char close)`:
    - Checks if an opening bracket `open` matches a closing bracket `close`.
- `int isBalanced(char expr[])`:
    - Iterates over the expression.
    - Pushes opening brackets to stack.
    - Pops and checks matching when a closing bracket is found.
    - Returns `1` if balanced, `0` if not.

## Main Function Overview
1. Prompts the user to enter a mathematical expression.
2. Reads the expression into `expr[]`.
3. Calls `isBalanced(expr)` to check parentheses.
4. Prints `Balanced` if parentheses match, else prints `Not Balanced`.


