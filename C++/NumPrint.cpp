#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int j=row;
        while(col<=row)
        {
            cout<<j++;
            col++;
        }
        cout<<endl;
        row++;
    }


    }