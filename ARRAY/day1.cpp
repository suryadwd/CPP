// Problem: Find the largest element in the array
// Given an array of integers, find the largest element.
//
// Example:
// Input: [10, 20, 5, 8, 15]
// Output: 20

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter size: ";
  cin>>n;
  int arr[n];
  cout<<"enter element: ";
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  int maxEle = arr[0];

  for(int i = 0; i < n; i++){
    if(maxEle<arr[i]){
      maxEle= arr[i];
    }
  }
  cout<<endl;
  cout<<"largest number: ";
  cout << maxEle;

}