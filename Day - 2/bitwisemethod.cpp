#include<bits/stdc++.h>
using namespace std;
int bitw(int n)
{
    int bin=0;
    int i=0;
    while(n>0)
    {
        int bit = (n & 1);
        bin = bit*pow(10,i++)+bin;
        n = n >> 1;
    }
    return bin;
}
int main()
{
    int n;
    cin>>n;
    int binary = bitw(n);
    cout<<binary;
    return 0;
}