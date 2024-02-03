#include<iostream>
using namespace std;
#define pie 3.14159265359
float area(int r)
{
    float b = r*r;
    float a = b*pie;
    return a;

}
int main()
{
float r;
cin>>r;
float ans = area(r);
cout<<ans;
}