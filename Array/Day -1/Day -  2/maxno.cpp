#include<iostream>
#include<limits.h>
using namespace std;
void maxans1(int arr[] , int size)
{
    int maxans = INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxans = max(arr[i],maxans);
    }
    cout<<maxans;
}
void maxno(int arr[] , int size)
{
    int maxans = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxans)
        {
            maxans = arr[i];
        }
    }
    cout<<maxans;
}
int main()
{
    int arr[]={20,4,15,2,6,8,11};
    int size = 7;
    maxans1(arr , size);
    return 0;
}