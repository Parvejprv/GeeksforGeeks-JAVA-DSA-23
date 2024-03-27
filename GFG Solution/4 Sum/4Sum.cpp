#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<vector<int>> fourSum(vector<int>& arr, int k){
  //sort the vector
  sort(arr.begin(), arr.end());

  int n = arr.size();
  vector<vector<int>> results;  // resultant vector


  for(int i=0; i<n-3; i++){
    if(i > 0 && arr[i] == arr[i - 1]) continue;   // skip duplicates of first element
    for(int j=i+1; j<n-2; j++){
      if(j > i+1 && arr[j] == arr[j - 1]) continue;    // skip duplicates for second number

      int target = k - arr[i] - arr[j];
      int left = j+1, right = n-1;

      while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
          results.push_back({arr[i], arr[j], arr[left], arr[right]});
          while(left < right && arr[left] == arr[left+1]) left++;
          while(left < right && arr[right] == arr[right-1]) right--;

          left++;
          right--;
          
        } else if (sum < target){
          left++;
        } else {
          right--;
        }
      }

    }
  }

  return results;
}
int main() {

  int n, k;

  cout << "Enter the size of the vector:";
  cin >> n;

  // create a vector of size n
  vector<int> arr(n);

  // input elements into the vector
  cout << "Input the elements into the vector:";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // enter target k
  cout <<  "Enter the value of target element k:";
  cin >> k;

  // create an resultant vector of vector of type int and print that vectors for that sum would be equals to the target element
  vector<vector<int>> result = fourSum(arr, k);
  
  // Display the vector element
  cout << "Output :- " << endl;
  for(auto &vec : result){
    for(auto num : vec){
      cout << num << " ";
    }
    cout << "$" << endl;
  }

  return 0;
}




/*  
Output:-
--------
Enter the size of the vector:6
Input the elements into the vector:1 5 1 0 6 0   
Enter the value of target element k:13
Output :- 
1 1 5 6 $

Enter the size of the vector:5
Input the elements into the vector:0 0 2 1 1
Enter the value of target element k:3
Output :- 
0 0 1 2 $


Enter the size of the vector:7
Input the elements into the vector:10 2 3 4 5 7 8
Enter the value of target element k:23
Output :- 
2 3 8 10 $
2 4 7 10 $
3 5 7 8 $
*/