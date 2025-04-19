// Author: Aditya Saroha
// Easy
// Link: https://leetcode.com/problems/add-digits/

class Solution {
    public:
        int addDigits(int num) {
            if(num != 0 && num % 9 == 0){   // To avoid this conditional, we can use 
                                            // (num - 1) % 9 + 1
                return 9;
            }
            return num % 9;
        }
    };

// Time Complexity: O(1)
