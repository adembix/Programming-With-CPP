#include<iostream>
using namespace std;

class cPerson{

private:
   short _ID;
   string _FirstName;
   string _LastName;
   string _Email;
   string _Phone;


public:
   cPerson(short ID, string FirstName, string LastName, string Email, string Phone){
      _ID = ID;
      _FirstName = FirstName;
      _LastName = LastName;
      _Email  = Email;
      _Phone = Phone;
   }

   short ID(){
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

   void PrintAllData(){
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

class cEmployee : public cPerson  // Inheritance
{
private:
   string _Title;
   string _Department;
   float _Salary;

public:
            // Parameterized Constructor of the Base Class
   cEmployee(int ID, string FirstName,string LastName,string Email, string Phone, string Title, string Department, float Salary) 
         : cPerson(ID,FirstName,LastName,Email,Phone)
         {
            _Title = Title;
            _Department = Department;
            _Salary = Salary;
         }

   void setTitle(string T){
      _Title = T;
   }

   string Title(){
      return _Title;
   }

   void setDepartment(string D){
      _Department = D;
   }

   string Department(){
      return _Department;
   }

   void setSalary(float S){
      _Salary = S;
   }

   float Salary(){
      return _Salary;
   }

};

int main()
{

   cEmployee E1(10, "Adem", "Bouaicha","adem@gmail.com","166522044","Program", "C1", 2000);

   E1.PrintAllData(); // From Base Class

   cout << "\nTitle: " <<E1.Title();
   cout << "\nDepartment: " << E1.Department();
   cout << "\nSalary: " << E1.Salary() << endl;

   return 0; 
}