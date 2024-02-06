#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int target = 3;
    int n=5;
    bool flag = 0;
    //0 - Not found
    //1 - Found
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"Target Found";
    }
    else
    {
        cout<<"Target Not Found";
    }
    return 0;
}