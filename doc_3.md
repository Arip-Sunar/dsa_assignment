# Documentation for Question 3  
## Reverse Traversal of a Singly Linked List

---

## 1. Data Structures Used

- **Singly Linked List**
  - Each node contains:
    - `data`: integer value
    - `next`: pointer to the next node

---

## 2. Functions Implemented

### `void insert(int value)`
- Inserts a new node at the end of the linked list.

### `void reverseTraversal(struct Node* node)`
- Uses recursion to traverse the linked list in reverse order.
- Prints data while returning from recursive calls.

---

## 3. Main Function Overview

1. Takes number of nodes from the user.
2. Inserts elements into the linked list.
3. Calls `reverseTraversal()` to print elements in reverse order.

---

## 4. Sample Output

Enter number of nodes: 4
Enter value: 10
Enter value: 20
Enter value: 30
Enter value: 40
Reverse traversal of linked list: 40 30 20 10
## 5. Conclusion

This program demonstrates reverse traversal of a singly linked list using recursion without modifying the list structure.