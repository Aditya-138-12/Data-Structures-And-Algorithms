# Problem
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

## Examples:

```
Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
```

## Constraints
Constraints:

`0 <= num <= 231 - 1`

## Follow Up
Follow up: Could you do it without any loop/recursion in O(1) runtime?

`Yes this can be done in O(1) time, as there is concept of digital root, we can make use of that instead of that formula (num - 1) % 9 + 1, Instead of this, we can just get the remainder when divided by 9 and return 9 when number is not equal to 0 and a Multiple of 9`