#include<iostream>
using namespace std;

class cPerson{

private:
   short _ID;
   string _FirstName;
   string _LastName;
   string _Email;
   int _Phone;


public:
   cPerson(short I, string F, string L, string E, int P){
      _ID = I;
      _FirstName = F;
      _LastName = L;
      _Email  = E;
      _Phone = P;
   }

   short getID(){
      return _ID;
   }

   void setFirstName(string F){
      _FirstName = F;
   }

   string getFirstName(){
      return _FirstName;
   }

   void setLastName(string L){
      _LastName = L;
   }

   string getLastName(){
      return _LastName;
   }

   string getFullName(){
      return _FirstName + ' ' + _LastName;
   }

   void setEmail(string E){
      _Email = E;
   }

   string getEmail(){
      return _Email;
   }

   void setPhone(int P){
      _Phone = P;
   }

   int getPhone(){
      return _Phone;
   }

   void PrintAllData(){
      cout << "\nInfo:\n";
      cout << "\n______________________";
      cout << "\nID        :" << _ID;
      cout << "\nFirst Name:" << _FirstName;
      cout << "\nLast Name :" << _LastName;
      cout << "\nFull Name :" << getFullName();
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

int main()
{
   cPerson o1(10,"Adem", "Bouaicha", "adem@gmail.com", 665656441);
   o1.PrintAllData();

   o1.SendEmail("Nothing", "How are you?");
   o1.SendSMS("How are you?");

   return 0; 
}