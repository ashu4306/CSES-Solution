/**
 * @author Ashutosh Sharma
 * Problem https://cses.fi/problemset/task/1094
 *
 * Solution 1: 
 * Time complexity : O(n)
 * space complexity : O(1)
 *
 * if current number >= last number no moves is required
 * if current number < last number, for min moves we need to increment current number by value equal to last number
 *
 * we actually dont need to store all numbers 
 * we only want last number
 **/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long min_moves = 0;

    /* Storing input */
//    vector<int> arr(n);
//    for(int i=0;i<n;i++) 
//        cin>>arr[i];
//
//    for(int i=1;i<n;i++) {
//        if(arr[i]<arr[i-1]) {
//            min_moves += arr[i-1] - arr[i];
//            arr[i] = arr[i-1];
//        }
//    }
//

    /* Not Storing input numbers */
    int prev_number = 0;
    int current_number;
    for(int i=0;i<n;i++) {

        cin>>current_number;

        if(current_number<prev_number) {
           min_moves += prev_number - current_number;
           current_number = prev_number;
        }
        prev_number = current_number;

    }

    cout<<min_moves;
}

