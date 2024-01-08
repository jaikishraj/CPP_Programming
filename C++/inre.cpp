#include<iostream>
using namespace std;
int main(){
    cout<<"print number :";
    int a=1;
    int b=a++; //1
    int c=++a; //3
    cout<<b<<endl;  //2
    cout<<c; //3
}