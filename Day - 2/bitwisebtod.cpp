#include<bits/stdc++.h>
using namespace std;
int bitw(int n)
{
    int dec = 0;
    int i = 0;
    while(n!=0)
    {
        int bit = n&1;
        if(bit == 1){
        dec = pow(2 , i)+dec;
        }
        n = n>>1;
        i++;
    }
    return dec;
}
int main()
{
    int n;
    cin>>n;
    int decimal = bitw(n);
    cout<<decimal;
    return 0;
}