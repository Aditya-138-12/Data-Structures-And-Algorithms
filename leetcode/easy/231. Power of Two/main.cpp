// Author: Aditya Saroha
// Easy
// Link: https://leetcode.com/problems/power-of-two/

class Solution {
    public:
        bool isPowerOfTwo(int n) {
            int flag = 0;
            if(n == 0 || n < 0){
                return false;
            }
            while(n > 1){
                if(n % 2 == 1){
                    flag = 1;
                    break;   // As the smalles number here would be 3, and 3/2 -> 1
                }
                n = n / 2;
            }
            return (flag == 1) ? false : true;   // Here N will become 1 only when it is a power of 2
        }
    };
// Time Complexity: O(logN) as the number is being reduced to half!
