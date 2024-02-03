#include<iostream>
using namespace std;
float miles(int n)
{
    float mi=0.62137119;
    float ans = n*mi;
    cout<<ans<<" miles"; 
}
int main()
{
    float n;
    cin>>n;
    miles(n);
    return 0;
}