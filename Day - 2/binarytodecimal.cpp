#include<bits/stdc++.h>
using namespace std;
int dtob(int n)
{
    int bin = 0;
    int i=0;
    while(n>0)
    {
        int bit = n%2;
        bin = bit * pow(10,i++)+bin;
        n = n/2;
    }
    return bin;
}
int main()
{
    int n;
    cin>>n;
    int binary = dtob(n);
    cout<<binary;
    return 0;
}