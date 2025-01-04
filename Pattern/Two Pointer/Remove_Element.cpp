#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int removeElement(vector<int>& arr, int val){

  int i = 0;
  int j = arr.size() - 1;

  int cnt = 0;

  while(i <= j){

    if(arr[j] == val){
      j--;
    }else if(arr[i] == val){
      swap(arr[i], arr[j]);
      i++;
      j--;
      cnt++;
    }else{
      i++;
    }
  }

  return cnt;
}

int main(){

  int n;
  cout << "Enter the size of vector";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter the elements of vector";

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int val;
  cin >> val;

  int remove = removeElement(arr, val);

  cout << remove;

  return 0;
}