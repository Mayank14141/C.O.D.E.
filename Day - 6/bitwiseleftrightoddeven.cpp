#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n == (n>>1)<<1)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}