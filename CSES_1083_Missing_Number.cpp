/**
 * @author Ashutosh Sharma
 *
 * Problem link https://cses.fi/problemset/task/1083
 *
 * Solution 1: Sort number
 * Time Complexity  :  O(nlogn)
 * Space Complexity :  O(1) assuming sort will be inplace 
 * sort all n-1 numbers , all nnumbers should be from 1...n consecutive
 * Edge case : if last nmmber is missing number
 *
 * Solution 2: mark found numbers 
 * Time complexity  : O(n)
 * Space Complexity : O(n)
 *
 * we can mark numbers that we have seen 
 * and revisit again and find missing one.
 * 
 **/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    /* Solution 1 */

  //  vector<int> arr(n-1);
  //  for(int i=0;i<n-1;i++) 
  //      cin>>arr[i];
  //  
  //  sort(arr.begin(),arr.end());
  // 
  //  int counter = 1;
  //  bool found_missing_number = false;
  //  for(int i=0; i<n-1; i++) {
  //      if(arr[i]!=counter) {
  //          cout<<counter;
  //          found_missing_number = true;
  //          break;
  //      }
  //      counter++;
  //  }
  //  if(!found_missing_number) cout<<n;
  //
  
    /* Solution 2 */

    vector<bool> found_number(n+1);
    int x;
    for(int i=0;i<n-1;i++) {
        cin>>x;
        found_number[x] = true;
    }
    for(int i=1;i<=n;i++) 
        if(!found_number[i]) cout<<i;
}
