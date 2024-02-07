#include<iostream>
using namespace std;
void swapbyxor(int arr[],int size)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        arr[left]=arr[left]^arr[right];
        arr[right]=arr[left]^arr[right];
        arr[left]=arr[left]^arr[right];
        left++;
        right--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    swapbyxor(arr,size);
    return 0;
}