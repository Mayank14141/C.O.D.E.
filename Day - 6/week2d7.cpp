#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int count = n-i,k=1;
        while(k<=count){
            cout<<k;
            k++;
        }
        count = n-i;
        int stars = 2*i;
        while(stars>0){
            cout<<"*";
            stars--;
        }
        count = n-i;
        while(count>0){
            cout<<count;
            count--;
        }
        cout<<"\n";
        i++;
    }
}

