/**
 * @author Ashutosh Sharma
 * Problem https://cses.fi/problemset/task/1070
 *
 * if n == 1 -> solution possible 
 * if n == 2 -> no solution as only possibility is ( 1,2 or 2,1 )
 * if n == 3 -> no solution possible 
 * if n == 4 -> solution possible (2,4,1,3,5)
 *
 * we can first print even number in increasing order and then print odd numbers in increasing order
 * since all odd or even number will have diff of 2
 * only possibility of collision is when we print last even number and first odd number
 * As in case when n == 3 , (2, 1 ,3) , all other cases collision will never happen
 **/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2 || n==3) 
        cout<<"NO SOLUTION";
    else {
        for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
    }
}
