#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        for(int j=0;j<i+1;j++)
        {
            ch = j+1+'A'-1;
            cout<<ch;
        }
        for(char a=ch;a>'A';)
        {
            a--;
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}