#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"enter the number :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
    for(col=1;col<=n;col++)
    {
        cout<<col*col<<" ";
    }
    cout<<endl;
    }
}