#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j; //n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}