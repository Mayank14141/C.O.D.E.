#include<iostream>
using namespace std;
float temp(float f)
{
    float c = ((f - 32)*(0.5555555));
    cout<<c;
}
int main()
{
    float f;
    cin>>f;
    temp(f);
    return 0;
}