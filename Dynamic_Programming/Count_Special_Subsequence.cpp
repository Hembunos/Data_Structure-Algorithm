#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int cnt;

int rec(int level, bool skip, vector<int>& arr, vector<int>& temp){

  if(level >= arr.size())
    return 0;

    
}

int NumberOfSpecialSubsequence(int n, vector<int>& arr){
  cnt = 0;
  vector<int> temp;
  rec(0, true, arr, temp);
}


int main(){

  int n;
  cin >> n;

  vector<int> arr;

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int ans = NumberOfSpecialSubsequence(n, arr);

  cout << ans;
}

