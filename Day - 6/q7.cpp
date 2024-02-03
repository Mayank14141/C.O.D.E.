#include<iostream>
using namespace std;
int fun(int n)
{
    if(n%4==0)
    return 0;
    if(n%4==1)
    return 1;
    if(n%4==2)
    return n+1;
    else 
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int ans = fun(n);
    cout<<ans;
    return 0;
}