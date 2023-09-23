# Big O

| Big O Notation | Type        | Computations for 10 elements | Computations for 100 elements | Computations for 1000 elements |
| -------------- | ----------- | ---------------------------- | ----------------------------- | ------------------------------ |
| **O(1)**       | Constant    | 1                            | 1                             | 1                              |
| **O(log N)**   | Logarithmic | 3                            | 6                             | 9                              |
| **O(N)**       | Linear      | 10                           | 100                           | 1000                           |
| **O(N log N)** | n log(N)    | 30                           | 600                           | 9000                           |
| **O(N^2)**     | Quadratic   | 100                          | 10000                         | 1000000                        |
| **O(2^N)**     | Exponential | 1024                         | 1.26e+29                      | 1.07e+301                      |
| **O(N!)**      | Factorial   | 3628800                      | 9.3e+157                      | 4.02e+2567                     |

### Data Structure Operations Complexity

| Data Structure         | Access | Search | Insertion | Deletion |
| ---------------------- | :----: | :----: | :-------: | :------: |
| **Array**              |   1    |   N    |     N     |    N     |
| **Stack**              |   N    |   N    |     1     |    1     |
| **Queue**              |   N    |   N    |     1     |    1     |
| **Linked List**        |   N    |   N    |     1     |    N     |
| **Hash Table**         |   1    |   N    |     N     |    N     |
| **Binary Search Tree** |   N    |   N    |     N     |    N     |
