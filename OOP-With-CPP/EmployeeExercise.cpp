#include<iostream>
using namespace std;

class Employee{
private:
   int _ID;
   string _FirstName;
   string _LastName;
   string _Title;
   string _Email;
   string _Phone;
   string _Department;
   int _Salary;

public:
   Employee(int ID, string F, string L, string T, string E, string P, string D, int S){
      _ID = ID;
      _FirstName = F;
      _LastName = L;
      _Title = T;
      _Email = E;
      _Phone = P;
      _Department = D;
      _Salary = S;
   }

   // read only property
   int ID(){
      return _ID;
   }

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
      return _FirstName+ ' ' +_LastName;
   }

   void setTitle(string T){
      _Title = T;
   }

   string Title(){
      return _Title;
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

   void setDepartment(string D){
      _Department = D;
   }

   string Department(){
      return _Department;
   }

   void setSalary(int S){
      _Salary = S;
   }

   int Salary(){
      return _Salary;
   }

   void Print(){
      cout << "\nInfo: \n";
      cout << "____________________";
      cout << "\nID: " << _ID;
      cout << "\nFirst Name: " << _FirstName;
      cout << "\nLast Name: " << _LastName;
      cout << "\nFull Name: " << FullName();
      cout << "\nTitle: " << _Title;
      cout << "\nEmail: " << _Email;
      cout << "\nPhone: " << _Phone;
      cout << "\nDepartment: " << _Department;
      cout << "\nSalary: " << _Salary;
      cout << "\n____________________\n";
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

int main()
{
   Employee e1(10,"Adem", "Bouaicha","Program", "adem@gmail.com","6656441","C1",2000);
   e1.Print();

   e1.SendEmail("Hi", "How are you?");
   e1.SendSMS("How are you?");

   return 0; 
}