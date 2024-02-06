#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            if(j==1)
            {
                cout<<i+1<<" ";
            }
            else if(j==n-i)
            {
                cout<<n<<" ";
            }
            else if(i==0)
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