#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number ";
cin>>n;
if(n%400==0 && n%4==0 || n%100!=0)
cout<<"leap year "<<endl;
else{
  cout<<"not leap year "<<endl;

}

}