# Documentation for Question 7  
## Dijkstra’s Algorithm for Shortest Path


## 1. Data Structures Used

- **Adjacency Matrix**
  - Stores weights of edges between vertices
- **Distance Array**
  - Stores shortest distance from source to each vertex
- **Visited Array**
  - Tracks visited vertices



## 2. Functions Implemented

### `int minDistance(int dist[], int visited[], int n)`
- Finds vertex with minimum distance not yet visited

### `void dijkstra(int graph[MAX][MAX], int n, int src)`
- Implements Dijkstra’s shortest path algorithm



## 3. Main Function Overview

1. Takes number of vertices and adjacency matrix as input
2. Takes source vertex
3. Calls Dijkstra’s algorithm
4. Displays shortest distances



## 4. Sample Output

Enter number of vertices: 4
Enter adjacency matrix:
0 1 4 0
1 0 2 6
4 2 0 3
0 6 3 0
Enter source vertex: 0

Vertex Distance from Source
0 0
1 1
2 3
3 6


## 5. Conclusion

This program computes the shortest path from a source vertex to all other vertices using Dijkstra’s algorithm.
