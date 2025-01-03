// Problem: Find the target of an element in the array
// Given an array of integers, find the target sum of element in the given array.
//
// Example:
// Input: [1,2,3,4,5]
// tagetSum: 9
// Output: 4,5




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

  int targetsum;
  cout<<"Enter targetSum: ";
  cin>>targetsum;
  cout<<endl;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(arr[i] + arr[j] == targetsum){
        cout<<"Elemnts found"<<endl;
        cout<<arr[i] <<", "<< arr[j] << endl;
      }
    }
  }

}
