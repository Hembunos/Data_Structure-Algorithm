// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        int cnt = 0;
        int prod = 1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == 0) cnt++;
            else prod = prod * arr[i];
        }
        
        vector<int> res(n,0);
        
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                res[i] = prod / arr[i];
            }else if( cnt == 1){
                if(arr[i] == 0){
                    res[i] = prod;
                }
            }
        }
        
        return res;
    }
};