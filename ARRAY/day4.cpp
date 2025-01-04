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

  int target;
  cout<<"enter target: ";
  cin>>target;

  int index = -1;

  for(int i = 0; i < n; i++){
    if(arr[i]==target){
      index = i;
      break;
    }
  }

  if(index == -1){
    cout<<"element not found"<<endl;}
  else{
    cout<<"element found at index: "<<index<<endl;
  }

}

// g++ -o day1.exe day1.cpp
// ./day1.exe
