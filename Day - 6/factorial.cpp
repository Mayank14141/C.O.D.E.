#include<iostream>
using namespace std;
long long int factorial(int n)
{
    long long int ans = 1;
    for(long long int i=n;i>=1;i--)
    {
        ans = ans*i;
    }
    return ans;
}
int main()
{
    long long int n;
    cin>>n;
    long long int ans = factorial(n);
    cout<<ans;
    return 0;
}