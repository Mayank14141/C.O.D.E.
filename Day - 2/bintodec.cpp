#include<bits/stdc++.h>
using namespace std;
int btod(int n)
{
    int dec = 0;
    int i = 0;
    while(n>0)
    {
        int bit = n%10;
        dec = bit*pow(2,i++)+dec;
        n = n/10;
    }
    return dec;
}
int main()
{
    int n;
    cin>>n;
    int decimal = btod(n);
    cout<<decimal;
    return 0;
}