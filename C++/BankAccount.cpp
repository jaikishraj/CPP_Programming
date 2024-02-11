#include<iostream>
#include<string>
using namespace std;
class BankAccount
{  
   private:
   string userid;
   string password;
   double balance=0.0;
   public:
   void CreateAccount()
   {
    cout<<"please enter your userId : ";
    cin>>userid;
    cout<<"Enter your password : ";
    cin>>password;
    cout<<"Thankyou , Your account has been Created Successfully !\n"<<endl;
   }
   bool login()
  {
   string entereduserid;
   string enteredPassword;
   
   cout<<"Again Login! If you want to deposit fund in your Bank Account "<<endl;
   cout<<"Enter Your userId : ";
   cin>>entereduserid;
   cout<<"Enter Your password : ";
   cin>>enteredPassword;
   if(entereduserid == userid && enteredPassword == password)
   {
      cout<<"Login Successfully !  "<<endl;
      return true;
   }
   else {
      cout<<"Invalid Passward or Username :"<<endl;
      exit(0);
   }
 }
 // Deposit amount !
 void DipositMoney()
 {
   double amount;
   cout<<"Enter the Diposited amount : ";
   cin>>amount;
   balance = balance + amount;
   cout<<"Diposited Amount successfull , Your Available Amount is "<<balance<<endl;
 }
 // Withdraw amount !
 void WithdrawMoney()
 {
   double amount;
   cout<<"Enter the Amount you want to Withdraw : ";
   cin>>amount;
   
   if(balance>=amount)
   {
    balance = balance - amount;
    cout<<"Withdraw balance Successfull. Your Available balance is "<<balance<<endl;
   }
   else
   {
      cout<<" Insufficient amount . Withdrawal Failed"<<endl;
   }
   exit;
 }
};
int main()
{
  BankAccount obj;
  obj.CreateAccount();
  obj.login();
  obj.DipositMoney();
  obj.WithdrawMoney();
}
