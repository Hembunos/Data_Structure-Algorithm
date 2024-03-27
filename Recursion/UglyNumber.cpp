#include<iostream>
using namespace std;

int solve(int arr[], int n,int k){

  int maxi = -999999;
  for (int i = 0; i < n; i ++){
    int sum = arr[i];
    // cout << sum << endl;
    for (int j = i + k; j < n; j+2){
      sum = sum + arr[j];
      // cout << sum << " ";
    }

    // cout << sum << " "; 
    if(sum > maxi)
      maxi = sum;
  }

  return maxi;
}

int main(){

  int arr[] = {2, -3, 4, 6, 1};
  int n = 5;
  int k = 2;
  cout<<solve(arr, n, k);

  return 0;
}