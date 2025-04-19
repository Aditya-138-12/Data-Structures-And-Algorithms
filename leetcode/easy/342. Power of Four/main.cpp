// Author: Aditya Saroha
// Easy
// Link: https://leetcode.com/problems/power-of-four/

class Solution {
    public:
        bool isPowerOfFour(int n) {
            if(n <= 0){
                return false;
            }
            int flag = 0;
            while(n > 1){
                if((n % 4) >= 1){
                    flag = 1;
                    break;
                }
                n /= 4;
            }
            return (flag == 1) ? false : true;
        }
    };
// Time Complexity: O(log(N) to the base 4)
