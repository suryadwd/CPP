
// Problem: Find the target in array of  element
// Given an array of integers, find the sum of element.

// Example:
// Input: [10, 20, 5, 8, 15]
// target: 8
// Output: element found at index: 3

// #include<iostream>
// using namespace std;

// int main(){

//    int n;
//   cout<<"enter size: ";
//   cin>>n;
//   int arr[n];
//   cout<<"enter element: ";
//   for(int i = 0; i < n; i++){
//     cin>>arr[i];
//   }

//   int target;
//   cout<<"enter target: ";
//   cin>>target;

//   int index = -1;

//   for(int i = 0; i < n; i++){
//     if(arr[i]==target){
//       index = i;
//       break;
//     }
//   }

//   if(index == -1){
//     cout<<"element not found"<<endl;}
//   else{
//     cout<<"element found at index: "<<index<<endl;
//   }

// }


// Problem:
// Given an array of integers, insert an element at the start of the array by right shifting the elements.

// Example:
// Input:
// Array: [10, 20, 30, 40]
// Element to insert at index 0: 5

// Output:
// Original array: [10, 20, 30, 40]
// Updated array: [5, 10, 20, 30, 40]


// 1 --> this by creating new array not good method

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;

//   cout << "Enter the size of array: ";
//   cin >> n;

//   int arr[n];
//   int k;

//   cout << "Enter the element to be inserted: ";
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   cout << "Enter the element to be inserted at 0 index: ";
//   cin >> k;
//   cout << "Original array: ";
//   for (int i = 0; i < n; i++)
//     cout << arr[i] << " ";
//   cout << endl;

//   int brr[n + 1];

//   for (int i = 0; i <= n; i++)
//   {
//     if (i == 0)
//       brr[i] = k;
//     else
//     {
//       brr[i] = arr[i-1];
//     }
//   }

//   cout << "Updated array: ";
//   for (int i = 0; i < n+1; i++)
//     cout << brr[i] << " ";
//   cout << endl;
// }

// 2 --> this is done with the help of rightSift and Left shift concept

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;

//   cout << "Enter the size of array: ";
//   cin >> n;

//   int arr[n+1];
//   int k;

//   cout << "Enter the element to be inserted: ";
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   cout << "Enter the element to be inserted at 0 index: ";
//   cin >> k;
//   cout << "Original array: ";
//   for (int i = 0; i < n; i++)
//     cout << arr[i] << " ";
//   cout << endl;

 
//  //right shift the array element by one
//   for (int i = n - 1; i >= 0; i--) {
//         arr[i + 1] = arr[i];
//     }

//   arr[0] = k;

//   cout << "Updated array: ";
//   for (int i = 0; i <= n; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }

// g++ -o day1.exe day1.cpp
// ./day1.exe
