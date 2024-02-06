#include<iostream>
using namespace std;
bool searcharray(int arr[] , int size , int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int target = 4;
    bool ans=searcharray(arr , size , target);
    if(ans==1)
    {
        cout<<"Target Found";
    }
    else
    {
        cout<<"Target Not Found";
    }
    return 0;
}