#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age :";
    cin>>age;
    if(age>=18)
    {
    goto vote;
    }else
    goto NotVote;
    vote: 
    cout<<"eligible for vote "<<endl;
    NotVote:
    cout<<"not eligible for vote ";
    
    
}