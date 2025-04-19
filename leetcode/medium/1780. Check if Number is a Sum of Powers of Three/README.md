# Problem
Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.

An integer y is a power of three if there exists an integer x such that y == 3x.

## Example
```
Example 1:

Input: n = 12
Output: true
Explanation: 12 = 31 + 32
Example 2:

Input: n = 91
Output: true
Explanation: 91 = 30 + 32 + 34
Example 3:

Input: n = 21
Output: false
```

## Constraints
Constraints:

`1 <= n <= 107`

## Intution
Simple intution is, a any number can be expressed in the form of sum of Powers of 3 as follow
N = (a0*3^0) + (a1*3^1) + (a2*3^2) + ...
We can calculate the a0, a1, a2 as follows, take the number and do its prime factorization, 
but using 3 and not 2, until 0 comes, now along with this 0 we get all the a's.
These a's are in reverse order, means the 0 will be written from left to right.
Ex; 13
  | 13 |
3 | 13 | -> 1
3 | 4  | -> 1
3 | 1  | -> 1
3 | 0  | -> stop now, we got this : 0111

Here: 13 = (1*3^0) + (1 * 3^1) + (1 * 3^2) = 13
Note here a can be either 0, 1 or 2..
