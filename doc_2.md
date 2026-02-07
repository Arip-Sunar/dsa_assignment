# Documentation for Question 2  
## Infix to Postfix Conversion and Evaluation Using Stack

---

## 1. Data Structures Used

- **Stack (Character Stack)**  
  - Implemented using an array `stack[MAX]`
  - Used during **infix to postfix conversion** to store operators and parentheses
  - `top` variable keeps track of the top element

- **Stack (Integer Stack)**  
  - Implemented using an integer array during postfix evaluation
  - Used to store operands while evaluating the postfix expression

---

## 2. Functions Implemented

### `void push(char x)`
- Pushes a character (operator or parenthesis) onto the stack.

### `char pop()`
- Removes and returns the top element from the stack.

### `int priority(char x)`
- Returns precedence of operators:
  - `+ , -` → priority 1
  - `* , /` → priority 2
  - `(` → priority 0

### `void infixToPostfix(char infix[], char postfix[])`
- Converts a given infix expression into postfix form.
- Uses stack to handle operator precedence and parentheses.

### `int evaluatePostfix(char postfix[])`
- Evaluates the postfix expression using an integer stack.
- Performs arithmetic operations based on operators.

---

## 3. Main Function Overview

1. Prompts the user to enter an infix expression.
2. Calls `infixToPostfix()` to convert infix to postfix.
3. Displays the postfix expression.
4. Calls `evaluatePostfix()` to compute the result.
5. Displays the evaluated result.

---

## 4. Sample Output

