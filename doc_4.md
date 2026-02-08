# Documentation for Question 4  
## Implementation of Doubly Linked List

---

## 1. Data Structures Used

- **Doubly Linked List**
  - Each node contains:
    - `data`: integer value
    - `prev`: pointer to previous node
    - `next`: pointer to next node

---

## 2. Functions Implemented

### `void insertEnd(int value)`
- Inserts a new node at the end of the list.

### `void insertAfter(int key, int value)`
- Inserts a new node after the node containing `key`.

### `void deleteNode(int key)`
- Deletes the node containing the specified value.

### `void display()`
- Displays all elements of the list.

---

## 3. Main Function Overview

1. Creates a doubly linked list.
2. Inserts nodes at the end.
3. Inserts a node after a given node.
4. Deletes a specific node.
5. Displays the list after each operation.

---

## 4. Sample Output

Initial list: 10 20 30
After inserting 25 after 20: 10 20 25 30
After deleting 10: 20 25 30
## 5. Conclusion

This program demonstrates insertion and deletion operations in a doubly linked list using structures.