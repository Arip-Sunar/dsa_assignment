# Documentation for Question 6  
## Construction of Min Heap and Max Heap



## 1. Data Structures Used

- **Array**
  - Used to represent heap structure
  - Index-based representation of binary heap



## 2. Functions Implemented

### `void maxHeapify(int arr[], int n, int i)`
- Maintains Max Heap property at index `i`

### `void minHeapify(int arr[], int n, int i)`
- Maintains Min Heap property at index `i`

### `void buildMaxHeap(int arr[], int n)`
- Converts array into Max Heap

### `void buildMinHeap(int arr[], int n)`
- Converts array into Min Heap

### `void display(int arr[], int n)`
- Prints heap elements



## 3. Main Function Overview

1. Reads array size and elements from user.
2. Builds Max Heap from given array.
3. Builds Min Heap from given array.
4. Displays both heaps.



## 4. Sample Output

Enter number of elements: 6
Enter elements:
5 3 8 4 1 9
Max Heap: 9 4 8 3 1 5
Min Heap: 1 3 8 4 5 9

## 5. Conclusion

This program demonstrates how unsorted data can be converted into Min Heap and Max Heap using heapify operations.
