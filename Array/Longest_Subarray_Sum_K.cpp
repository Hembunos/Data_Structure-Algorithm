class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        unordered_map<int, int> prefixSumMap;
        int prefixSum = 0;
        int maxLength = 0;
    
        for (int j = 0; j < n; j++) {
            prefixSum += arr[j];
    
           
            if (prefixSum == k) {
                maxLength = j + 1;
            }
    
           
            if (prefixSumMap.find(prefixSum - k) != prefixSumMap.end()) {
                maxLength = max(maxLength, j - prefixSumMap[prefixSum - k]);
            }
    
            
            if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
                prefixSumMap[prefixSum] = j;
            }
        }
    
        return maxLength; 
    }
};