class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int cnt = 0;
        
        for(int k = n-1; k >= 2; k--){
            
            int j = k-1;
            int i = 0;
            
            while(i < j){
                
                int currSum = arr[i] + arr[j];
                
                if(currSum <= arr[k]) i++;
                else{
                    cnt += (j - i);
                    j--;
                }
                
            }
            
        }
        
        return cnt;
    }
};