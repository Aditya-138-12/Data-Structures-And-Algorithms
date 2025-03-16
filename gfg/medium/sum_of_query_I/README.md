# Problem
You need to calculate the following sum over Q queries.:

<div style="background-color: white; padding: 10px; display: inline-block;">
    <img src="https://github.com/user-attachments/assets/e7af829a-ff9d-42c1-883d-aeec2a28ff1f" alt="Sample Image" style="max-width: 100%; height: auto; display: block;">
</div>

<div style="background-color: white; padding: 10px; display: inline-block; border: 1px solid black;">
    <img src="https://github.com/user-attachments/assets/e7af829a-ff9d-42c1-883d-aeec2a28ff1f" alt="Sample Image" style="max-width: 100%; height: auto; display: block;">
</div>

Assume array to be 1-indexed.

## Examples:

```
Input: nums = {2, 3, 4, 5, 1, 6, 7},
Query = {{2, 4}, {2, 6}}
Output: {64, 230}
Explanation: For the 1st query,
(12 * 3 + 22 * 4 + 32 * 5) = 64.
For the second query
(12 * 3 + 22 * 4 + 32 * 5 + 42 * 1 + 52 * 6) = 
230
```

## Your Task:
You don't need to read or print anyhting. Your task is to complete the function FindQuery() which takes nums and Query as input parameter and returns a list containg the answer modulo 109 + 7 for each query.
 

**Expected Time Complexity:** O(n)

**Expected Space Complexity:** O(n)
 

## Constraints:
```
1 <= n <= 105
1 <= nums[i] <= 105
1 <= no. of queries <= 104
```
