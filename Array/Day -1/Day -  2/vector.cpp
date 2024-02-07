#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(7);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n;
    cin>>n;
    vector<int>brr(n,18);
    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    vector<int>crr{10,20,30,40};
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<crr.empty();
    cout<<endl;
    vector<int>drr;
    cout<<drr.empty()<<endl;
    return 0;
}