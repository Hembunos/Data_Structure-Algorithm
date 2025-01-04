class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        
        int n = arr.size();
        int cnt = 0;
    
        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;
    
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
    
                if (sum == target) {
                    if (arr[j] == arr[k]) {
                        int freq = k - j + 1;
                        cnt += (freq * (freq - 1)) / 2;
                        break;
                    } else {
                        int a = arr[j];
                        int b = arr[k];
                        int x = 0, y = 0;
    
                        while (j < k && arr[j] == a) {
                            x++;
                            j++;
                        }
    
                        while (j <= k && arr[k] == b) {
                            y++;
                            k--;
                        }
    
                        cnt += (x * y);
                    }
                } else if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
        }
    
        return cnt;
    }
};