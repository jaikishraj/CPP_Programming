#include<iostream>
using namespace std;
class thief
{
  string name;
  string address;
  int mob;
  
  public:
  void input();
  void output();
};
void thief::input()
{
     name = "rahul kr ";
     address = "patna ";
     mob = 52462133;
}
void thief::output()
{
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<mob;
}

class police : public thief  
{
};
int main()
{
    police p;
    p.input();
    p.output();
}
