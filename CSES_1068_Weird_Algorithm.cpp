/**
 * @author Ashutosh Sharma
 * 
 * Problem link https://cses.fi/problemset/task/1068/
 * 
 * We can check for odd number by n&1 OR n%2==1
 * n&1 -> in all odd numbers last bit is always 1.
 * For eg. 
 *  0101 = 3
 *  0001 = 1
 *  ---- &
 *  0001 = 1 (true)
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n&1) n=n*3+1;
        else n/=2;
    }
    cout<<1;
}
