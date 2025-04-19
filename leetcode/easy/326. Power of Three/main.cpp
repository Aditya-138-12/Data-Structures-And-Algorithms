// Author: Aditya Saroha
// Easy
// Link: https://leetcode.com/problems/power-of-three/

class Solution {
    public:
        bool isPowerOfThree(int n) {
            if(n <= 0){
                return false;
            }
            int flag = 0;
            while(n > 1){
                if((n % 3) >= 1){
                    flag = 1;
                    break;
                }
                n = n / 3;
            }
            return (flag == 1) ? false : true;
    
            // This one is not working correctly for higher values, whose answer is not always a int, like
            // 243 -> log of 243 to the base 3 is ~4.9999999
            // double x = log(n)/log(3);
            // int y = int(x);
            // cout << x << y << endl;
            // if(x > y){
            //     return false;
            // }else{
            //     return true;
            // }
        }
    };
// Time Complexity: o(log(N) to the base 3)
