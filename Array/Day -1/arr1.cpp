#include<iostream>
using namespace std;
int main()
{
    // int arr[100];
    // char ch[200];
    // bool flag[300];
    // long ld[201];
    // short st[310];
    // cout<<"Array created"<<endl;
    // int a = 5;
    // cout<<&a;
    // int arr[10];
    //cout<<arr<<endl<<&arr;
    // cout<<sizeof(arr);
    // int arr[]={1,2,3,4,5};
    // int brr[5]={1,2,3,4,5};
    // int crr[5]={1,2};
    //error in this type
    //int drr[2]={1,2,3,4,5};
    int arr[5]={1,2,3,4,5};
    //cout<<arr[3];
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}