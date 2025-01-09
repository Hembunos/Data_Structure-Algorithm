class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        int i = 0, j = 0;
        
        int sum = 0;
        
        while(j < arr.size()){
            
            sum += arr[j];

            while (sum > target && i <= j) {
                sum -= arr[i];
                i++;
            }
    
            if (sum == target) {
                return {i + 1, j + 1}; 
            }
    
            j++;  
        }
        
        return {-1};
    }
};