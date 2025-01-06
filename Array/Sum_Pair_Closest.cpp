// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        
       int n = arr.size();
        if (n < 2) return {};
    
        sort(arr.begin(), arr.end());
    
        int i = 0, j = n - 1;
        int min_diff = INT_MAX;
        int max_pair_diff = INT_MIN;
        vector<int> result;
    
        while (i < j) {
            int curr_sum = arr[i] + arr[j];
            int curr_diff = abs(target - curr_sum);
    
            if (curr_diff < min_diff || (curr_diff == min_diff && (arr[j] - arr[i] > max_pair_diff))) {
                min_diff = curr_diff;
                max_pair_diff = arr[j] - arr[i];
                result = {arr[i], arr[j]};
            }
    
            if (curr_sum > target) {
                j--;
            } else {
                i++;
            }
        }
    
        return result;
    }
};