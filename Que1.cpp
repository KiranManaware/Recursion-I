// Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 123454321
#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    cout<<i;
    print(i+1,n);
    if(i!=n) cout<<i;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(1,n);
    return 0;
}