// Author: Aditya Saroha
// Medium
// Link: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            // Simple intution is, a any number can be expressed in the form of sum of Powers of 3 as follow
            // N = (a0*3^0) + (a1*3^1) + (a2*3^2) + ...
            // We can calculate the a0, a1, a2 as follows, take the number and do its prime factorization, 
            // but using 3 and not 2, until 0 comes, now along with this 0 we get all the a's.
            // These a's are in reverse order, means the 0 will be written from left to right.
            // Ex; 13
            //   | 13 |
            // 3 | 13 | -> 1
            // 3 | 4  | -> 1
            // 3 | 1  | -> 1
            // 3 | 0  | -> stop now, we got this : 0111
            
            // Here: 13 = (1*3^0) + (1 * 3^1) + (1 * 3^2) = 13
            // Note here a can be either 0, 1 or 2..
            int flag = 0;
            while(n > 1){
                if((n % 3) > 1){
                    flag = 1;
                    break;
                }
                n /= 3;
            }
            return (flag == 1) ? false : true;
        }
    };
// Time Complexity: O(log(N) to the base 3)
