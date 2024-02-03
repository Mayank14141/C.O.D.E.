#include<iostream>
using namespace std;
int integer(int n)
{
    while(n>0)
    {
    int a = n/10;
    int b = n/10;
    n = n/10;
    cout<<b;
    }
    
}
int main()
{
    int n;
    cin>>n;
    integer(n);
}