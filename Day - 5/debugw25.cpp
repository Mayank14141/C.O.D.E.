#include<iostream>
using namespace std;
int checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return false;
            }
            else if(temp>n){
                return true;
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int ans=checkMember(n);
    cout<<ans;
    return 0;

}