// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int i = 0, j = n - 1;
        
        int cnt = 0;
        
        while(i < j){
            
            int sum = arr[i] + arr[j];
            
            if( sum >= target) j--;
            else{
                int pairs = j - i;
                cnt += pairs;
                i++;
            }
        }
        
        return cnt;
    }
};