#include<iostream>
using namespace std;
int main(){
    int n,row,star;
    cout<<"enter the number :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
    for( star=1;star<=row;star++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
}