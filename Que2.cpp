//  Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion
#include<iostream>
using namespace std;
int sumOdd(int a,int b){
    if(a>b) return 0;
    int sum;
    if(a%2!=0){
        sum=a+sumOdd(a+1,b);
        return sum;
    }
    else{
        sum=sumOdd(a+1,b);
        return sum;
    }
}
int main()
{
    int a,b;
    cout<<"enter a,b "<<endl;
    cin>>a;
    cin>>b;
    cout<<sumOdd(a,b);
    return 0;
}