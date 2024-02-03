#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n==1 || n==0)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        if(prime(i))
        cout<<i<<" ";
    }
    return 0;
}