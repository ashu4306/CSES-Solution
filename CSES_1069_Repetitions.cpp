/**
 * @author Ashutosh Sharma
 * Problem https://cses.fi/problemset/task/1069
 * Time complexity : O(n)
 * Space Complexity : O(1)
 * compare current character with previous character 
 * if equal increase current_longest
 * else reset current_longest since we found new character
 **/

#include<bits/stdc++.h>
using namespace std;
int main() {
    
    string DNA_sequence;
    cin>>DNA_sequence;
    int n = DNA_sequence.size();

    int longest_reptition = 1;
    int current_longest = 1;

    for(int i=1;i<n;i++) {
        if(DNA_sequence[i] == DNA_sequence[i-1]) current_longest++;
        else current_longest = 1;
        longest_reptition = max(longest_repttion,current_longest);
    }
    cout<<longest_reptition;
}
