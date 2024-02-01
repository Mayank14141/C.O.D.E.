#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int p=2 , r=3 , n=4 , t=5;
    int a;
    a = (int)(pow(1+(r/n), n*t));
    cout<<p*a;
    return 0;
}