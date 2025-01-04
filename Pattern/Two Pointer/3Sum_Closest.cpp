#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int SumClosest(vector<int> &arr, int target){

  sort(begin(arr), end(arr));

  int i = 0;
  int j = arr.size();

  int sumClosest = 0;

  for (int i = 0; i < arr.size() - 1; i++){
    int j = i + 1;
    int k = arr.size() - 1;

    while( j <= k){

      if(arr[i] + arr[j] + arr[k] > target){
        j--;
      };
    }
  }

  return sumClosest;
}


int main(){

  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int val;
  cin >> val;

  int sum = SumClosest(arr,val);
  cout << sum;
}