# Problem
Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 
## Examples
```
Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
```

## Constraints
Constraints:

`-231 <= n <= 231 - 1`
 
## Follow Up
Follow up: Could you solve it without loops/recursion?
`Same, when done double x = log(N)/log(3), it works correctly for small values but when N increases, for ex: 243, it will not give correct x, it will give 4.9999, due to which when done int y = int(x), y will be 4 and x will be auto set to 5 instead of 4.999 and hence we will get false in return.`
