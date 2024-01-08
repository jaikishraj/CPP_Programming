#include<iostream>
using namespace std;
int main(){
    int n,row;
    cout<<"enter the number :";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        //char name ='a'+(row-1);
    for(char col='a';col<='e';col++)
    {
        cout<<col<<" ";
    }
    cout<<endl;
    }
}