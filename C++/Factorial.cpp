#include<iostream>
using namespace std;

void fact(int n)
{
    int ans=1;
    for(int i=1; i<=n;i++)
    {
        ans=ans*i;
        cout<<ans<<endl;
    }
}
int main(){
    int a;
    cout<<"enter the number :";
    cin>>a;
    fact(a);
}