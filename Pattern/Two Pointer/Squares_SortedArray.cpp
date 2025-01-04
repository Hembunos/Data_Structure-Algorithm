#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> sortedArray(vector<int>& arr, int n){

  int a = -1;

  for (int i = 0; i < n; i++){
    if(arr[i] < 0){
      arr[i] = arr[i] * a;
    }
  }

  int i = 0;
  int j = n - 1;

  while( i <= j){

    if(arr[i] < arr[j]){
      j--;
    }else{
      swap(arr[i], arr[j]);
      j--;
    }
  }

  for (int i = 0; i < n; i++){
    arr[i] = arr[i] * arr[i];
  }

  return arr;
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

  vector<int> temp = sortedArray(arr, n);

  return 0;
}