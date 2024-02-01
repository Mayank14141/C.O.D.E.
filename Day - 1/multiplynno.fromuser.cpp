#include<iostream>
using namespace std;
int a;
int ans=1;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        ans=ans*a;
    }
    cout<<ans;
    return 0;
}