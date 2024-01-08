#include<iostream>
using namespace std;
int main(){
    int n,a,b,fibo;
    cout<<"enter number :";
    cin>>n;
    a=0;
    b=1;
    cout<<" "<<a<<" "<<b<<" ";
    for(int i=0; i<=n; i++){
        fibo=a+b;
        cout<<fibo<<" ";
        a=b;
        b=fibo;
        fibo=a;
    }
    
}