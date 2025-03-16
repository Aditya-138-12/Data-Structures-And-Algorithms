# Problem
You are given an array arr[] of n integers and q queries in an array queries[] of length 2*q containing l, r pair for all q queries. You need to compute the following sum over q queries.

![image](https://github.com/user-attachments/assets/788d7f1e-f7ef-42f5-ae9d-b4366c7fa0ac)

Note : Array is 1-Indexed.

## Examples:

```
Input: n = 4, arr = {1, 2, 3, 4}, q = 2, queries = {1, 4, 2, 3}
Output: 10 5
Explaination: In the first query we need sum from 1 to 4 which is 1+2+3+4 = 10. In the second query we need sum from 2 to 3 which is 2 + 3 = 5.
```
```
Input: n = 5, arr = {26, 30, 48, 29, 8}, q = 2, queries = {4, 4, 2, 3}
Output: 29 78
Explaination: In the first query we need sum from 4 to 4 which is 29. In the second query we need sum from 2 to 3 which is 30 + 48 = 78.
```

## Your Task
You don't need to read input or print anything. Your task is to complete the function querySum() which takes n, arr, q and queries as input parameters and returns the answer for all the queries.

**Expected Time Complexity:** O(n+q)

**Expected Auxiliary Space:** O(n)

### Constraints:
```
1 ≤ n, q ≤ 105
1 ≤ arri ≤ 103
1 ≤ l ≤ r ≤ n
```
