/*  
Problem: Koko eating bananas
Link: 

*/

#include<iostream>
#include<vector>
using namespace std;



int Solve(int N, vector<int> &piles, int H)
{
  // Let suppose the array that we are passing, piles = [3, 6, 7, 11] of n=4 and h = 8

  int start = 0, end = 0, mid, ans = -1, n = piles.size();
  long long sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += piles[i];
    end = max(end, piles[i]);
  }

  // we can also put the start value from 1, but there is no need to start from there
  start = sum / H; // start = 3

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    int total_time = 0;
    for (int i = 0; i < n; i++)
    {
      total_time += piles[i] / mid;
      if (piles[i] % mid)
        total_time++;
    }
    // check if total_time is greater than assign hours
    if (total_time > H)
    {
      start = mid + 1;
    }
    else
    {
      ans = mid;
      end = mid - 1;
    }
  }
  return ans;
}



int main() {
  int n;
  cout << "Enter the size of the vector: ";
  cin >> n;
  vector<int> piles(n);

  cout << "Enter the elements into the vector: ";
  for(int i=0; i<n; i++){
    cin >> piles[i];
  }

  int h;
  cout << "enter the total hour assign: ";
  cin >> h;

  int Result = Solve(n, piles, h);
  cout << "Result : " << Result << endl;

  return 0;
}


/*  
Output:-
----------
Enter the size of the vector: 4
Enter the elements into the vector: 3 6 7 11
enter the total hour assign: 8
Result : 4


*/