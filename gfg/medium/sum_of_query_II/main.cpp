// Author: Aditya Saroha
// Medium
// Link: https://www.geeksforgeeks.org/problems/sum-of-query-ii5310/0

class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        // code here
        vector<int> prefixSum(n + 1, 0);
        vector<int> ansArr;
        int tempSum = 0;
        for(int i = 1; i <= n; i++){
            tempSum = tempSum + arr[i - 1];
            prefixSum[i] = tempSum;
        }
        // for(int i = 0; i < prefixSum.size(); i++){
        //     cout << prefixSum[i] << " ";
        // }
        //cout << endl;
        for(int i = 0; i < q*2; i+=2){
            int tempPrefixSum = 0;
            tempPrefixSum = prefixSum[queries[i + 1]] - prefixSum[queries[i] - 1];  // As Array was 1-based indexed
            ansArr.push_back(tempPrefixSum);
        }
        return ansArr;
    }
};

// Time Complexity: O(n+q)
// Space Complexity: O(n)
