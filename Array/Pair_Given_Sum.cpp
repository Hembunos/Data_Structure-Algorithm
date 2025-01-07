
class Solution {
  public:

    int countPairs(vector<int> &arr, int target) {
        
        int n = arr.size();
        if (n < 2) return 0;
    
        int i = 0, j = n - 1;
        int cnt = 0;
    
        while (i < j) {
            int currSum = arr[i] + arr[j];
    
            if (currSum == target) {
                
                if(arr[i] == arr[j]){
                    
                    int n = j - i + 1;
                    
                    cnt += (n*(n-1))/2;
                    
                    break;
                    
                }else{
                    
                    int countLeft = 1, countRight = 1;
        
                    while (i + 1 < j && arr[i] == arr[i + 1]) {
                        countLeft++;
                        i++;
                    }
        
                    while (j - 1 > i && arr[j] == arr[j - 1]) {
                        countRight++;
                        j--;
                    }
        
                    cnt += countLeft * countRight;
                    i++;
                    j--;
                }
            } else if (currSum < target) {
                i++;
            } else {
                j--;
            }
        }
    
        return cnt;
    }
};