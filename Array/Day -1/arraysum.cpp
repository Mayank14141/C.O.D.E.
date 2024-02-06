#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int n=5;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cnt = cnt+arr[i];
    }
    cout<<"Array sum : "<<cnt;
    return 0;
}