// Author: Aditya Saroha
// Link: https://www.geeksforgeeks.org/problems/maximum-prefix-sum-for-a-given-range0227/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        //std::vector<int> prefixSum(sizeof(arr) + 1);
        vector<int> ansArr;
        //cout << sizeof(leftIndex) / sizeof(leftIndex[0]) << endl;
        int maxSum = 0;
        for(int i = 0; i < leftIndex.size(); i++){
            int tempSum = 0;
            maxSum = 0;
            for(int j = leftIndex[i]; j <= rightIndex[i]; j++){
                tempSum += arr[j];
                if(tempSum > maxSum){maxSum = tempSum;}
            }
            ansArr.push_back(maxSum);
        }
        return ansArr;
    }
};
