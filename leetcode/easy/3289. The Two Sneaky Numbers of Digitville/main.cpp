// Author: Aditya Saroha
// Easy
// Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for(size_t i = 0; i < nums.size(); i++){
            for(size_t j = i + 1; j < nums.size(); j++){
                if((nums[j] + nums[i]) == (2*nums[i])){
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
// Time Complexity is: O(n^2)
