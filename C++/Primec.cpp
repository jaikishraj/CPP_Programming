#include<iostream>
using namespace std;
int prime(int num)
{
  if(num>2)
  return 0;
  for(int i=2; i<num; i++)
  {
    if(i%2==0)
    return 0;
    else 
    return 1;
  }

}
int main()
{
int a;
cout<<"enter the number :";
cin>>a;
cout<<prime(a);
}