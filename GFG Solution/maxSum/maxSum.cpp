/*  
Topic name : Kadane's Algorithm

Question:
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)

Your Task:
You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] ≤ 107

*/



#include<iostream>
using namespace std;
int maxSubarraySum(int arr[], int n){
  int maxEndingHere = arr[0];
  int maxSoFar = arr[0];

  for(int i = 1; i < n; i++){
    maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
    maxSoFar = max(maxSoFar, maxEndingHere);
  }
  return maxSoFar;
}

int main() {
  int n; 
  cout <<  "Enter the size of the array:";
  cin >> n;

  int arr[n];
  cout << "Input the elements of the array:";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int maxSum =  maxSubarraySum(arr,n);
  cout << "Max subarray sum is : " << maxSum << endl;
  

  return 0;
}

/*
TC: O(n)
SC: O(1)  

Output:-
--------
Enter the size of the array:5
Input the elements of the array:1 2 3 -2 5
Max subarray sum is : 9


Enter the size of the array:4
Input the elements of the array:-1 -2 -3 -4
Max subarray sum is : -1


*/