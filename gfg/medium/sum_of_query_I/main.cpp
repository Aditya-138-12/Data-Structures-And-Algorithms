// Author: Aditya Saroha
// Medium
// Link: https://www.geeksforgeeks.org/problems/sum-of-query-i1920/0
// I have commented on this link, explaining my approach, this was a very good maths problem I have faced.

// My Solution with Overflow errors, to see the submission ready solution, go on gfg account.

class Solution {
public:
	vector<int>FindQuery(vector<int>nums, vector<vector<int>>Query){
	    // Code here
	    
	    const int MOD = 1000000007;
        
        vector<int64_t> prefixSum(nums.size() + 1, 0);
        vector<int64_t> prefixMul(nums.size() + 1, 0);
        vector<int64_t> prefixZul(nums.size() + 1, 0);
        vector<int> ansArr;
        int64_t tempSum = 0;
        for(int i = 1; i <= nums.size(); i++){
            tempSum = (tempSum + nums[i - 1]) % MOD;
            prefixSum[i] = tempSum;
        }
        // for(int i = 0; i < prefixSum.size(); i++){
        //      cout << prefixSum[i] << " ";
        //  }
        // cout << endl;
        tempSum = 0;
        for(int i = 1; i <= nums.size(); i++){
            tempSum = (tempSum + ((((int64_t)i*i) % MOD)*nums[i - 1])%MOD) % MOD;
            prefixMul[i] = tempSum;
        }
        // for(int i = 0; i < prefixMul.size(); i++){
        //      cout << prefixMul[i] << " ";
        //  }
        // cout << endl;
        tempSum = 0;
        for(int i = 1; i <= nums.size(); i++){
            tempSum = (tempSum + (((int64_t)i*nums[i - 1])%MOD))%MOD;
            prefixZul[i] = tempSum;
        }
        // for(int i = 0; i < prefixZul.size(); i++){
        //      cout << prefixZul[i] << " ";
        //  }
        // cout << endl;
        
        // Formula: ((l*l) - 2l + 2)(PS[r] - PS[l - 1]) - (2*l)(PZ[r] - PZ[l - 1]) + PM[r] - PM[l - 1]
        
        
        for(int i = 0; i < Query.size(); i++){
            int64_t l = Query[i][0];
            int64_t r = Query[i][1];
            int64_t tempPrefixSum = 0;
            tempPrefixSum = ((((l - 1) % MOD * ((l - 1) % MOD)) % MOD * 
                ((prefixSum[r] - prefixSum[l - 1]) < 0 ? 
                 ((prefixSum[r] - prefixSum[l - 1] + MOD) % MOD) : 
                 ((prefixSum[r] - prefixSum[l - 1]) % MOD))) % MOD - 
              (((2 * ((l - 1) % MOD)) % MOD) * 
                ((prefixZul[r] - prefixZul[l - 1]) < 0 ? 
                 ((prefixZul[r] - prefixZul[l - 1] + MOD) % MOD) : 
                 ((prefixZul[r] - prefixZul[l - 1]) % MOD))) % MOD + 
              ((prefixMul[r] - prefixMul[l - 1]) < 0 ? 
                ((prefixMul[r] - prefixMul[l - 1] + MOD) % MOD) : 
                ((prefixMul[r] - prefixMul[l - 1]) % MOD))) % MOD;
            ansArr.push_back(tempPrefixSum);
        }
        return ansArr;
        }

};

// Time Complexity: O(n)
// Space Complexity: O(n)
