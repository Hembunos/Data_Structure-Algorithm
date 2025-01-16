class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> prefix_map;
        int maxLen = 0;
        int prefix_sum = 0;
    
        prefix_map[0] = -1;
    
        for (int i = 0; i < arr.size(); ++i) {
 
            prefix_sum += (arr[i] == 0) ? -1 : 1;
    
            if (prefix_map.find(prefix_sum) != prefix_map.end()) {
                maxLen = max(maxLen, i - prefix_map[prefix_sum]);
            } else {
                
                prefix_map[prefix_sum] = i;
            }
        }
    
        return maxLen;
    }
};
