class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        int i = 0, j=n-1;
        int ans = 0, res = 0;
        while(i<j) {
            ans = (j-i) * min(arr[i], arr[j]);
            res = max(res, ans);
            if(arr[i] < arr[j]) i++;
            else j--;
        }
        return res;
        
    }
};