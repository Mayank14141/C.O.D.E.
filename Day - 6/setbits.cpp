#include<iostream>
using namespace std;
int setbit(int n)
{
    int cnt=0;
    while(n>0)
    {
        cnt = cnt+(n&1);
        n = n>>1;
    }
    cout<<cnt;
}
int main()
{
    int n;
    cin>>n;
    setbit(n);
    return 0;
}