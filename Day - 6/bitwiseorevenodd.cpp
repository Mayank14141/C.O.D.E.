#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n|1)==n)
    {
        cout<<"Odd";
    }
    else
    {
        cout<<"Even";
    }
    if((n|1)==(n+1))
    {
        cout<<" even";
    }
    else
    {
        cout<<" Odd";
    }
    return 0;
}