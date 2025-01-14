class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);
        
        leftSum[0] = arr[0];
        rightSum[n-1] = arr[n-1];
        
        for(int i = 1; i < n; i++){
            leftSum[i] = leftSum[i-1] + arr[i];
        }
        
        for(int i = n - 2; i >= 0; i--){
            rightSum[i] = rightSum[i+1] + arr[i];
        }
        
        for(int i = 0; i < n; i++){
            
            int left = leftSum[i];
            int right = rightSum[i];
        
            if(left == right) return i;
        }
        
        return -1;
    }
};