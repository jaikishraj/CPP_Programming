#include<iostream> 
using namespace std;
class A
{
 int a,b;
 public:
 void input() {
    a=20;
    b=30;
    
 }
 friend class B;
};
class B
{
  int c;
  public:
  void output(A ref)
  {
    c=ref.a + ref.b;
    cout<<c;
  }

};
int main()
{
    A obj;
    obj.input();
   B obj2;
   obj2.output(obj);
   return 0;
}