# Documentation for Question 5  
## Graph Traversal using BFS and DFS


## 1. Data Structures Used

- **Adjacency Matrix**
  - A 2D array `adj[MAX][MAX]`
  - `adj[i][j] = 1` indicates an edge between vertex `i` and `j`

- **Visited Array**
  - Keeps track of visited vertices during traversal

- **Queue**
  - Used in BFS traversal



## 2. Functions Implemented

### `void DFS(int v)`
- Performs Depth First Search starting from vertex `v`
- Uses recursion to traverse graph deeply

### `void BFS(int start)`
- Performs Breadth First Search using a queue
- Visits vertices level by level



## 3. Main Function Overview

1. Takes number of vertices and edges from user.
2. Builds adjacency matrix for undirected graph.
3. Calls DFS traversal from vertex 0.
4. Calls BFS traversal from vertex 0.
5. Displays traversal order.



## 4. Sample Output

Enter number of vertices: 4
Enter number of edges: 4
Enter edge (u v): 0 1
Enter edge (u v): 0 2
Enter edge (u v): 1 3
Enter edge (u v): 2 3
DFS Traversal starting from vertex 0: 0 1 3 2
BFS Traversal starting from vertex 0: 0 1 2 3


## 5. Conclusion

This program demonstrates graph traversal techniques BFS and DFS using an adjacency matrix representation.
