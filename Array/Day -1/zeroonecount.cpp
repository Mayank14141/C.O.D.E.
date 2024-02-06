#include<iostream>
using namespace std;
void count(int arr[] , int size)
{
    int zerocount = 0;
    int onecount  = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        else
        {
            onecount++;
        }
    }
    cout<<"Zero Count  "<<zerocount<<endl;
    cout<<"One Count  "<<onecount<<endl;
}
int main()
{
    int arr[8]={0,1,1,1,0,0,1,1};
    int size = 8;
    count(arr , size);
    return 0;
}