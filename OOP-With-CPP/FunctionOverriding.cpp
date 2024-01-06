#include<iostream>
using namespace std;

   // base class
class cPerson{
private:
   int _ID;
   string _FirstName;
   string _LastName;
   string _Email;
   string _Phone;

public:
   cPerson(int ID, string FirstName, string LastName, string Email, string Phone){

      _ID = ID;
      _FirstName = FirstName;
      _LastName = LastName;
      _Email = Email;
      _Phone = Phone;
   }

      //get property
   int ID(){
      return _ID;
   }
      //set property
   void setFirstName(string F){
      _FirstName = F;
   }

   string FirstName(){
      return _FirstName;
   }

   void setLastName(string L){
      _LastName = L;
   }

   string LastName(){
      return _LastName;
   }

   string FullName(){
      return _FirstName + ' ' + _LastName;
   }

   void setEmail(string E){
      _Email = E;
   }
   
   string Email(){
      return _Email;
   }

   void setPhone(string P){
      _Phone = P;
   }

   string Phone(){
      return _Phone;
   }

   void Print(){
      cout << "\nInfo:\n";
      cout << "\n______________________";
      cout << "\nID        :" << _ID;
      cout << "\nFirst Name:" << _FirstName;
      cout << "\nLast Name :" << _LastName;
      cout << "\nFull Name :" << FullName();
      cout << "\nEmail     :" << _Email;
      cout << "\nPhone     :" << _Phone;
      cout << "\n______________________\n";
   }


   void SendEmail(string Subject, string Body){
      cout << "\nThe following message sent successfully to email :" << _Email;
      cout << "\nSubject: " << Subject;
      cout << "\nBody: " << Body << endl;;
   }

   void SendSMS(string Body){
      cout << "\nThe following message sent successfully to phone :" << _Phone << endl;
      cout << Body << endl;
   }

};


class cEmployee : public cPerson
{   
private:
   string _Title;
   string _Salary;
   string _Department;

public:
   cEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Salary, string Department)
         : cPerson(ID,FirstName,LastName,Email,Phone)
      {
         _Title = Title;
         _Salary = Salary;
         _Department = Department;
      }

      //Function Overriding
   void Print(){
      cout << "\nInfo:\n";
      cout << "______________________";
      cout << "\nID        :" << ID();
      cout << "\nFirst Name:" << FirstName();
      cout << "\nLast Name :" << LastName();
      cout << "\nFull Name :" << FullName();
      cout << "\nEmail     :" << Email();
      cout << "\nPhone     :" << Phone();
      cout << "\nTitle     :" << _Title;
      cout << "\nSalary    :" << _Salary;
      cout << "\nDepartment:" << _Department;
      cout << "\n______________________\n";
   }
};


int main()
{
   cEmployee o1(10,"Adem","Bouaicha","a@a.com","45656100","Developer","2000","CEO");
   o1.Print();

   return 0; 
}