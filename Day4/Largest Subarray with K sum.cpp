class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
          unordered_map<int, int> sumMap;
        int maxLen = 0;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += A[i];
            if (sum == 0) {
                maxLen = i + 1;
            }
            // If sum is already present in the map, update maxLen
            else if (sumMap.count(sum)) {
                maxLen = max(maxLen, i - sumMap[sum]);
            }
            // Store sum if it's not present in the map
            else {
                sumMap[sum] = i;
            }
        }
        
        return maxLen;
    }
};
