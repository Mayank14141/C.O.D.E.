#include<iostream>
using namespace std;
void swapthird(int arr[],int size)
{
    int temp;
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
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
    int size=6;
    swapthird(arr,size);
    return 0;
}