# Problem
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 
## Examples:
```
Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
```
 
## Constraints
Constraints:

`-231 <= n <= 231 - 1`
 
## Follow Up
Follow up: Could you solve it without loops/recursion?
`Yes this can be done using log, specificly using this -> for a number N to know whether it is a power of 2 or not we can do this double x = log(N)/log(2), and after that we can compare the double x with its typed cast integer value using int(x), if the subtraction of these is not 0 then the number is not Power of 2 etc... But here the main thing is this will only work only work for small values like 16, but when the number is increase like 64 or higher the Log value will not be accurate 6, it would be something like 5.9999, which will raise errors!!!`
