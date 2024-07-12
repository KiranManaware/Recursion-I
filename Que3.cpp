// Given a positive integer, return true if it is a power of 2 using recursion (leetcode 231)
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n==1) return true;
    if(n%2!=0 || n==0) return false;
    return isPowerOfTwo(n/2);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(isPowerOfTwo(n)) cout<<n<<" is the power of 2";
    else cout<<n<<" is not the power of 2";
    return 0;
}