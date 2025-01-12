class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
      int n = arr.size();
      if (n < 3) return 0;

      vector<int> leftMax(n), rightMax(n);
      
      leftMax[0] = arr[0];
      for (int i = 1; i < n; i++) {
          leftMax[i] = max(leftMax[i - 1], arr[i]);
      }

      rightMax[n - 1] = arr[n - 1];
      for (int i = n - 2; i >= 0; i--) {
          rightMax[i] = max(rightMax[i + 1], arr[i]);
      }

      int res = 0;
      for (int i = 1; i < n - 1; i++) {
          res += min(leftMax[i], rightMax[i]) - arr[i];
      }

      return res;
    }
};