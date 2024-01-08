#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"enter the number :";
    cin>>n;
    int count=1;
    for(row=1;row<=n;row++)
    {
    for( col=1;col<=n;col++)
    {
        cout<<count<<" ";
        //(row-1)*5+col
        count++;
    }
    cout<<endl;
    }
}