#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int ans=a+b;
    return ans;
}
int mul(int j,int k)
{
    int p=j*k;
    return p;
}
int main(){
    int m,n;
    cout<<"enter the number ";
    cin>>m>>n;
    cout<<sum(m,n)<<endl;   //int ans=sum(m,n); then cout<<ans;
    cout<<mul(m,n);
}