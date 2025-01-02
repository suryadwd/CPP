// Problem: Find the sun of all element in the array
// Given an array of integers, find the sum of element.
//
// Example:
// Input: [10, 20, 5, 8, 15]
// Output: 58



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

  cout<<endl;

  int sum = 0;

  for(int i = 0; i < n; i++){
    sum = sum+arr[i];
  }


  cout<<"sum of all elements of array: "<<endl;

  cout<<sum<<endl;

}
