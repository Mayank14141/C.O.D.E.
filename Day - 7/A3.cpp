#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k = i;
        int c=1;
        for(int j=0;j<n;j++)
        {
            if(j<n-i-1)
            {
                cout<<"  ";
            }
            else
            {
                cout<<c<<" ";
                c++;
            }
        }
        for(int j=0;j<i;j++)
        {
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
    }
    

}