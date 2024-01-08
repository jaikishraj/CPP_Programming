#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the values :";
    cin>>n;
    int i=2;
    while(i<n){

    if(n%i==0){
    cout<<"not number :"<<i<<endl;
    }
    else{
        cout<<"prime number :"<<i <<endl;
    }
    i++;
    }
}
