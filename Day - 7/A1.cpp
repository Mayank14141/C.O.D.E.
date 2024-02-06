#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            if(j==1 || j==i+1)
            {
                cout<<j<<" ";
            }
            else if(i==n-1)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}